import socket
import json
from random import randint
import time

def sendDataStream(conn,n):
	x = list(range(0,n))
	y = []
	for __ in range(n):
		y.append(randint(0,30)*1.29875)
	data = json.dumps([{"X":x,"Y":y}])
	print(data.encode())

	conn.send(data.encode())

s = socket.socket()
host = socket.gethostname()
port = 1234

s.connect((host,port))

while True:
	sendDataStream(s,10)
	time.sleep(1)

s.close()
print('Connection Closed')