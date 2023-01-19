#pragma once

#include<SDL.h>
#include<SDL_image.h>

#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::endl;

enum imagesNames
{
	deadCell = 0,
	livingCell
};

struct imagePath
{
	std::string path;
	short int position;
};

struct position
{
	short int i = 0;
	short int j = 0;
};

struct sizes
{
	short int width = 0;
	short int height = 0;
};

struct cell
{
	position pixelPosition = { 0,0 };
	position position = { 0,0 };
	short int type = imagesNames::deadCell;
	short int lifeTime = 0;
};

struct fieldSettings
{
	sizes size = { 500, 500 };
	sizes cellSize = { 0, 0 };
};












