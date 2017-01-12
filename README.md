# raspi-remocon-setting

コマンドカンペ用
```
/home/pi/dev/remocon/SendInfraredData
/home/pi/dev/remocon/aircon/up.txt
sudo /home/pi/dev/remocon/ReadInfraredData /home/pi/dev/remocon/aircon/on.txt
sudo gcc SendInfraredData.c -o SendInfraredData -lwiringPi

/home/pi/dev/julius/julius/julius -C /home/pi/dev/dictation-kit/mybot.jconf &
sudo iconv -f utf8 -t eucjp ./mybot.yomi | ~/dev/julius/gramtools/yomi2voca/yomi2voca.pl > mybot.dic
python /home/pi/dev/julius-script/remote_robo.py
```
