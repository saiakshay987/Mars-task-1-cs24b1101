# Mars-task-1-cs24b1101
Learning Experience : Learnt new things like bash scripting and eulers angles and behaviour tree...the questions were challenging and not so hard at same time
Fomulae and approach used:
For Rover navigation Question i assumed the rover to be at origin then updated the 55 cm distance in the same direction of x,y co-ordinates by using vectors concept and formulas i used are basic vectors formulae like splittinfg vector into unit vectors then adding 55 in each direction by multiplying with unit vector
For 3 number system to 4 number system question:I took the three angles(in radians) and used the standard conversion formula to get the 4 quaternion components.
Formulas I used:
qx = sin(roll/2) * cos(pitch/2) * cos(yaw/2) - cos(roll/2) * sin(pitch/2) * sin(yaw/2);
qy = cos(roll/2) * sin(pitch/2) * cos(yaw/2) + sin(roll/2) * cos(pitch/2) * sin(yaw/2);
qz = cos(roll/2) * cos(pitch/2) * sin(yaw/2) - sin(roll/2) * sin(pitch/2) * cos(yaw/2);
qw = cos(roll/2) * cos(pitch/2) * cos(yaw/2) + sin(roll/2) * sin(pitch/2) * sin(yaw/2)

Answers for Behviour tree questions:Behaviour is very easy to visualize and understand. It is easy for the rover to break down the tree easily as it is just simple yes and no statements. It is better than if-else statements because if and else codes are long and complex for every condition arises a new statement increasing the length of the overall code which makes it difficult to debug the code but in case of a behaviour tree it is very wasy to debug.And if the baterry is low my rover would be asked to turn off all the unecessary systems to focus on battery saving and if its not low then it would procced normally
Sources Used: Sources provided in the sheet and chat gpt to learn concepts
