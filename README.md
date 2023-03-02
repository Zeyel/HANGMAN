# HANGMAN

Project for the network course in the 7th semester

Tim BRANSTETT & Florent VAIDIE

Hangman in client / server sides made in C

To compile :

If Windows : 
* Install WSL
* Run it where the project is located
* One in the server folder
* One in the client folder

If Linux :
* `sudo apt install build-essential` if you don't have it (we compile it with gcc)
* Run it where the project is located
* One in the server folder
* One in the client folder

The code works with IP adresses not only localhost, it has been set to localhost because
it is easier to handle to launch on several computers, but if you want to try it, change these fields to your IP Adress :
* connection_server:init_server:112 : `inet_aton("[YOURIPADRESS]"`
* connection_client:connect_server:86 : `inet_aton("[YOURIPADRESS]")`

Command :
* make : compile and launch the program


# If Visual Studio Code shows error, it's from Windows who can't compile it
# If you're using WSL and want to change IP Address, don't forget that you have to change your IP to the Linux distribution, not your Windows one

Trying SonarQube
