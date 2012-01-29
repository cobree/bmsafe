// Values of read ADC Voltage and associated Temperature (1�C/ 10)

const int ADC_Volt2Temp_Table[206][2] = {

   {0b1111110010 , -395} , 
   {0b1111110001 , -385} , 
   {0b1111110000 , -375} , 
   {0b1111101111 , -365} , 
   {0b1111101110 , -355} , 
   {0b1111101101 , -345} , 
   {0b1111101100 , -335} , 
   {0b1111101011 , -325} , 
   {0b1111101010 , -315} , 
   {0b1111101001 , -305} , 
   {0b1111101000 , -295} , 
   {0b1111100110 , -285} , 
   {0b1111100101 , -275} , 
   {0b1111100100 , -265} , 
   {0b1111100011 , -260} , 
   {0b1111100010 , -255} , 
   {0b1111100001 , -245} , 
   {0b1111100000 , -240} , 
   {0b1111011111 , -235} , 
   {0b1111011110 , -230} , 
   {0b1111011101 , -225} , 
   {0b1111011100 , -220} , 
   {0b1111011011 , -215} , 
   {0b1111011010 , -210} , 
   {0b1111011001 , -205} , 
   {0b1111011000 , -200} , 
   {0b1111010111 , -195} , 
   {0b1111010110 , -190} , 
   {0b1111010101 , -185} , 
   {0b1111010100 , -180} , 
   {0b1111010011 , -175} , 
   {0b1111010010 , -170} , 
   {0b1111010001 , -165} , 
   {0b1111010000 , -160} , 
   {0b1111001111 , -155} , 
   {0b1111001110 , -150} , 
   {0b1111001100 , -145} , 
   {0b1111001011 , -140} , 
   {0b1111001010 , -135} , 
   {0b1111001001 , -130} , 
   {0b1111000111 , -125} , 
   {0b1111000110 , -120} , 
   {0b1111000101 , -115} , 
   {0b1111000011 , -110} , 
   {0b1111000010 , -105} , 
   {0b1111000000 , -100} , 
   {0b1110111111 , -95} , 
   {0b1110111101 , -90} , 
   {0b1110111100 , -85} , 
   {0b1110111010 , -80} , 
   {0b1110111001 , -75} , 
   {0b1110110111 , -70} , 
   {0b1110110110 , -65} , 
   {0b1110110100 , -60} , 
   {0b1110110010 , -55} , 
   {0b1110110000 , -50} , 
   {0b1110101111 , -45} , 
   {0b1110101101 , -40} , 
   {0b1110101011 , -35} , 
   {0b1110101001 , -30} , 
   {0b1110101000 , -25} , 
   {0b1110100110 , -20} , 
   {0b1110100100 , -15} , 
   {0b1110100010 , -10} , 
   {0b1110100000 , -5} , 
   {0b1110011110 , 0} , 
   {0b1110011100 , 5} , 
   {0b1110011010 , 10} , 
   {0b1110011000 , 15} , 
   {0b1110010101 , 20} , 
   {0b1110010011 , 25} , 
   {0b1110010001 , 30} , 
   {0b1110001111 , 35} , 
   {0b1110001101 , 40} , 
   {0b1110001010 , 45} , 
   {0b1110001000 , 50} , 
   {0b1110000110 , 55} , 
   {0b1110000011 , 60} , 
   {0b1110000001 , 65} , 
   {0b1101111111 , 70} , 
   {0b1101111100 , 75} , 
   {0b1101111010 , 80} , 
   {0b1101110111 , 85} , 
   {0b1101110100 , 90} , 
   {0b1101110010 , 95} , 
   {0b1101101111 , 100} , 
   {0b1101101101 , 105} , 
   {0b1101101010 , 110} , 
   {0b1101100111 , 115} , 
   {0b1101100100 , 120} , 
   {0b1101100010 , 125} , 
   {0b1101011111 , 130} , 
   {0b1101011100 , 135} , 
   {0b1101011001 , 140} , 
   {0b1101010110 , 145} , 
   {0b1101010011 , 150} , 
   {0b1101010000 , 155} , 
   {0b1101001101 , 160} , 
   {0b1101001010 , 165} , 
   {0b1101000111 , 170} , 
   {0b1101000100 , 175} , 
   {0b1101000001 , 180} , 
   {0b1100111110 , 185} , 
   {0b1100111011 , 190} , 
   {0b1100110111 , 195} , 
   {0b1100110100 , 200} , 
   {0b1100110001 , 205} , 
   {0b1100101110 , 210} , 
   {0b1100101010 , 215} , 
   {0b1100100111 , 220} , 
   {0b1100100100 , 225} , 
   {0b1100100000 , 230} , 
   {0b1100011101 , 235} , 
   {0b1100011001 , 240} , 
   {0b1100010110 , 245} , 
   {0b1100010010 , 250} , 
   {0b1100001111 , 255} , 
   {0b1100001011 , 260} , 
   {0b1100001000 , 265} , 
   {0b1100000100 , 270} , 
   {0b1100000001 , 275} , 
   {0b1011111101 , 280} , 
   {0b1011111001 , 285} , 
   {0b1011110110 , 290} , 
   {0b1011110010 , 295} , 
   {0b1011101110 , 300} , 
   {0b1011101010 , 305} , 
   {0b1011100111 , 310} , 
   {0b1011100011 , 315} , 
   {0b1011011111 , 320} , 
   {0b1011011011 , 325} , 
   {0b1011010111 , 330} , 
   {0b1011010011 , 335} , 
   {0b1011010000 , 340} , 
   {0b1011001100 , 345} , 
   {0b1011001000 , 350} , 
   {0b1011000100 , 355} , 
   {0b1011000000 , 360} , 
   {0b1010111100 , 365} , 
   {0b1010111000 , 370} , 
   {0b1010110100 , 375} , 
   {0b1010110000 , 380} , 
   {0b1010101100 , 385} , 
   {0b1010101000 , 390} , 
   {0b1010100100 , 395} , 
   {0b1010100000 , 400} , 
   {0b1010011100 , 405} , 
   {0b1010011000 , 410} , 
   {0b1010010100 , 415} , 
   {0b1010010000 , 420} , 
   {0b1010001100 , 425} , 
   {0b1010001000 , 430} , 
   {0b1010000100 , 435} , 
   {0b1001111111 , 440} , 
   {0b1001111011 , 445} , 
   {0b1001110111 , 450} , 
   {0b1001110011 , 455} , 
   {0b1001101111 , 460} , 
   {0b1001101011 , 465} , 
   {0b1001100111 , 470} , 
   {0b1001100011 , 475} , 
   {0b1001011111 , 480} , 
   {0b1001011010 , 485} , 
   {0b1001010110 , 490} , 
   {0b1001010010 , 495} , 
   {0b1001001110 , 500} , 
   {0b1001001010 , 505} , 
   {0b1001000110 , 510} , 
   {0b1001000010 , 515} , 
   {0b1000111110 , 520} , 
   {0b1000111010 , 525} , 
   {0b1000110110 , 530} , 
   {0b1000110001 , 535} , 
   {0b1000101101 , 540} , 
   {0b1000101001 , 545} , 
   {0b1000100101 , 550} , 
   {0b1000100001 , 555} , 
   {0b1000011101 , 560} , 
   {0b1000011001 , 565} , 
   {0b1000010101 , 570} , 
   {0b1000010001 , 575} , 
   {0b1000001101 , 580} , 
   {0b1000001001 , 585} , 
   {0b1000000101 , 590} , 
   {0b1000000001 , 595} , 
   {0b111111101 , 600} , 
   {0b111111001 , 605} , 
   {0b111110101 , 610} , 
   {0b111110001 , 615} , 
   {0b111101101 , 620} , 
   {0b111101001 , 625} , 
   {0b111100110 , 630} , 
   {0b111100010 , 635} , 
   {0b111011110 , 640} , 
   {0b111011010 , 645} , 
   {0b111010110 , 650} , 
   {0b111010010 , 655} , 
   {0b111001111 , 660} , 
   {0b111001011 , 665} , 
   {0b111000111 , 670} , 
   {0b111000011 , 675} , 
   {0b111000000 , 680} , 
   {0b110111100 , 685} , 
   {0b110111000 , 690} , 
   {0b110110100 , 695} , 
   {0b110110001 , 700}
};



int ADC_ConvertVol2Temp(int ADC_Volt)
{
   unsigned int i = 0;

	if (ADC_Volt < ADC_Volt2Temp_Table[205][0])
		return ADC_Volt2Temp_Table[205][1];
	else
	{
		while (ADC_Volt2Temp_Table[i][0] > ADC_Volt)
		{
			i++;
		}
		if (ADC_Volt2Temp_Table[i][0] - ADC_Volt <= ADC_Volt - ADC_Volt2Temp_Table[i][0])  
			return ADC_Volt2Temp_Table[i][1];
		else
			return ADC_Volt2Temp_Table[i-1][1];
	}
}
	
	