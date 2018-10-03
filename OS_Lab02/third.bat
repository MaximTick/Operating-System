CLS echo off
set n= 0 1 2 3 4 5 6 7 8 9 A B C D F
set f=4

for %%x in (%n%) do (
	for %%y in (%f%) do (
		color %%x%%y
		timeout 2 >nul
	)
)	
