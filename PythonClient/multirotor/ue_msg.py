import cosysairsim as airsim
import sys
import time


client = airsim.MultirotorClient()
client.confirmConnection()
client.enableApiControl(True)
client.client.call("sendUEMessageToVehicle", "P","drone_1")
time.sleep(3)
client.client.call("sendUEMessageToVehicle", "G","drone_1")