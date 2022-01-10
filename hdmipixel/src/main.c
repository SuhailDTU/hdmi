/*
 * main.c
 Version 1.0
 *
 *  Created on: Jan 3, 2022
 *      Author: gurk
 */
#include "graphics.h"
#include "display_ctrl/display_ctrl.h"
#include "math.h"
#include "timer_ps/timer_ps.h"
#include <stdio.h>


/*DisplayCtrl dispCtrl;
XAxiVdma vdma;*/

int main(){
	initialize();
	//demoPrintTest(dispCtrl.framePtr[dispCtrl.curFrame], dispCtrl.vMode.width, dispCtrl.vMode.height, dispCtrl.stride);
	//test1(dispCtrl.framePtr[dispCtrl.curFrame], dispCtrl.vMode.width, dispCtrl.vMode.height, dispCtrl.stride);
	//drawSquare(dispCtrl.framePtr[dispCtrl.curFrame], 200, 300, 500, 0);
/*	drawPixel(dispCtrl.framePtr[dispCtrl.curFrame], 10, 20, 0x00FF00);
	drawPixel(dispCtrl.framePtr[dispCtrl.curFrame], 15, 25, 0xFFFF00);
	drawPixel(dispCtrl.framePtr[dispCtrl.curFrame], 20, 30, 0xFF0000);
	drawPixel(dispCtrl.framePtr[dispCtrl.curFrame], 25,35, 0x0000FF);*/

	//testPattern(dispCtrl.framePtr[dispCtrl.curFrame], dispCtrl.vMode.width, dispCtrl.vMode.height, dispCtrl.stride);

	//drawSquare(25, 30, 70, 80, 0xFFFF00);

		//placeMovableObject(1, 2, 1);

/*
		//player 1
		placeObject(350, (540-(75+60)), 2);
		placeObject(400, (540-(75+60)), 2);
		//player 2
		placeObject(200, (540-(75+60)), 2);
		placeObject(250, (540-(75+60)), 2);

		//player 3
		placeObject(85, (540-(170+60)), 2);
		placeObject(135, (540-(170+60)), 2);

		//player 4 cards
		placeObject(85, 170, 2);
		placeObject(135, 170, 2);

		//player 5
		placeObject(200, 75, 2);
		placeObject(250, 75, 2);

		//player 6
		placeObject(350, 75, 2);
		placeObject(400, 75, 2);

		//player 7
		placeObject((640 - 85 - 30), 170, 2);
		placeObject((640 - 135 - 30), 170, 2);

		//player 8
		placeObject((640 - 85 - 30), (540-(170+60)), 2);
		placeObject((640 - 135 - 30), (540-(170+60)), 2);
*/

		//arrayContents();
		//init
		setAmountOfPlayers(8);
		initializePlayerEmblems();
		initChips();
		initBalanceSheets();
		createBackground();
		saveBackground();

		//for display can manually change later
		setPlayerCards(0, 1, 3, 1);
		setPlayerCards(0, 2, 3, 2);

		setPlayerCards(1, 3, 3, 1);
		setPlayerCards(1, 4, 3, 2);

		setPlayerCards(2, 5, 1, 1);
		setPlayerCards(2, 6, 1, 2);

		setPlayerCards(3, 2, 4, 1);
		setPlayerCards(3, 3, 4, 2);

		setPlayerCards(4, 4, 4, 1);
		setPlayerCards(4, 5, 4, 2);

		setPlayerCards(5, 11, 2, 1);
		setPlayerCards(5, 12, 2, 2);

		setPlayerCards(6, 13, 2, 1);
		setPlayerCards(6, 1, 2, 2);

		setPlayerCards(7, 2, 1, 1);
		setPlayerCards(7, 3, 1, 2);

		//placeBacksideOfCard(250, 250);


		//initial draw, rest is handled by interrupts
		updateBackground();
		drawLayer();
		setFrameFlag(1);
		startOrStopScreenUpdate(1);//enable interrupts

		while(1){


			getInput();
			if(getFrameFlag() == 0){
				//printf("\n\r newframe");
				updateBackground();
				drawLayer();
				setFrameFlag(1);
			}


			//startOrStopScreenUpdate(1);
		}
	return 0;
}


