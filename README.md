# VintageTubeOverdrive.lv2
Overdrive/Distortion


## Features

- Overdrive/Distortion simulation. 

VintageTubeOverdrive is modeled after the Behringer Vintage Tube Overdrive VT911(*) with a moded drive control.



(*) 'Other product names modeled in this software are trademarks of their respective companies that do not endorse and are not associated or affiliated with this software.
Behringer Vintage Tube Overdrive VT911 is a trademark or trade name of another manufacturer and was used merely to identify the product whose sound was reviewed in the creation of this 
product. All other trademarks are the property of their respective holders.'

## Dependencys

- libcairo2-dev
- libx11-dev

## Build

- git submodule init
- git submodule update
- make # Note: don't use make all, only make !!
- make install # will install into ~/.lv2 ... AND/OR....
- sudo make install # will install into /usr/lib/lv2
