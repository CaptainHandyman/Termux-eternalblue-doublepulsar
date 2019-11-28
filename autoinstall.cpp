#include <iostream>
using namespace std;

int main(){
    system("pkg update && pkg upgrade && pkg install root-repo && termux-setup-storage && pkg install metasploit && pkg install git && cd && git clone https://github.com/ElevenPaths/Eternalblue-Doublepulsar-Metasploit && cd /data/data/com.termux/files/home/Eternalblue-Doublepulsar-Metasploit && cp eternalblue_doublepulsar.rb /data/data/com.termux/files/usr/opt/metasploit-framework/modules/exploits/smb && cd /data/data/com.termux/files/home && mkdir .wine && cd .wine && mkdir drive_c && msfconsole");
    return 0;
}
