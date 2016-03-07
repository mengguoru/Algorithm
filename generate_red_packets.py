'''
description  : algorithm of generating red packets.
summary      : use Normalization
author       ；mengguoru
date         : 2016/02/12
'''

import random 

money = input('How much？:')
num_packets = input('How many packet?:')
index_your_choice = input('You choose which packet?:')

red_packet = []
total = 0
for x in range(int(num_packets)):
	generate_num = random.randint(1,100)
	total = total + generate_num
	red_packet.append(generate_num)

# normalization
try:
	num_normalization = red_packet[int(index_your_choice)]/total
	money_you_get = num_normalization*int(money)
	print('You get:',money_you_get)
except Exception as e:
	raise e