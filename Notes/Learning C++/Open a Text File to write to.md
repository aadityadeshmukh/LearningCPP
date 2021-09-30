# open a Text File to write to

-  `ofstream` output file stream file writer stream
-  create an object with the above data type
-  `object.open("filename.txt", ios::app)`
	-  It will create the file
	-  If it exists it will overwrite if `ios::app` is not present

