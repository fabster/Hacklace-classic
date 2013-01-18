import sys

try:
    from serial import Serial, SerialException
except ImportError as import_error:
    print "You have to install the pyserial package first\n"
    print "Accomplish this with:\n"
    print "[pip install|easy_install] pyserial"
    sys.exit(1)

def upload_config(port, filename):
    port.write(chr(27))
    port.write('HL')

    f = open(filename, "r")
    port.write(f.read())


if len(sys.argv) < 3:
    print "Usage python #{__FILE__} serialport filename"
    sys.exit(1)
else:
    serialport = sys.argv[1]
    filename = sys.argv[2]
    try:
      s = Serial(serialport, 2400)
      upload_config(s, filename)
    except SerialException as e:
      print "Serialport device {0} not found." . format(serialport)

