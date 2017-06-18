# FINAL PROJECT

# PROTECT THE BASE
My final project will be called Protect The Base. The objective of the game is to fend off as many enemy ramming ships as possible.  Although there is only one player, the player is two turrets as reinforcement.  The ship and base both start at 100 health points (HP).  If the player is rammed, it loses 10 HP.  If the base is rammed, it loses 5 HP.  If the turrets are rammed, the base loses 10 HP as the turrents are part of the base itself. I officially started around week seven and have been working inconsistently on it.  I have spent more time researching and learning Qt rather than actively writing. I have been working offline and hence there will be diffculty of checking its timeline.

This project should be complete in terms of functionality.  It lacks sophisticated graphics, which displeases me as a self-proclaimed artist.  I will add these graphics as soon as I can.  The project is messy due to it being one of my very few experiences with Qt Creator.  However, I have learned a lot and am confident I can work on Qt at a faster pace.  

The video of the project can be found here: https://drive.google.com/file/d/0B0teY8bJhJOzbmotNFphTU9YdE0/view

# Classes
basehealth - keeps a record of the base health.

button - creates the play and quit buttons

enemy - the red rectangles

game - has the compenonents to run the game.

health - ship's health

instr - supposed to show the keys the can be used int the game.

player - the playable ship

rocket - the objects that the turrets shoot

score - tallies the amount of enemies sunk

shell - the objects the player shoots

turret - object that has a polygon that tracks enemies within its radius.

# Controls
Although the player is positioned horizontally, it uses standard WASD controls along with some extra keys.

W - forward

A - left

S - reverse

D - right

E - forward right

Q - forward left

C - reverse right

Z - reverse left

ENTER - shoot

SPACE - shoot
