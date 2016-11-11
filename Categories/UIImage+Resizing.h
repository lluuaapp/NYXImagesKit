//
//  UIImage+Resize.h
//  NYXImagesKit
//
//  Created by @Nyx0uf on 02/05/11.
//  Copyright 2012 Nyx0uf. All rights reserved.
//  www.cocoaintheshell.com
//


#import "NYXImagesHelper.h"


typedef enum
{
	NYXCropModeTopLeft,
	NYXCropModeTopCenter,
	NYXCropModeTopRight,
	NYXCropModeBottomLeft,
	NYXCropModeBottomCenter,
	NYXCropModeBottomRight,
	NYXCropModeLeftCenter,
	NYXCropModeRightCenter,
	NYXCropModeCenter
} NYXCropMode;

typedef enum
{
	NYXResizeModeScaleToFill,
	NYXResizeModeAspectFit,
	NYXResizeModeAspectFill
} NYXResizeMode;


@interface NYXImage (NYX_Resizing)

-(NYXImage*)cropToSize:(CGSize)newSize usingMode:(NYXCropMode)cropMode;

// NYXCropModeTopLeft crop mode used
-(NYXImage*)cropToSize:(CGSize)newSize;

-(NYXImage*)scaleByFactor:(float)scaleFactor;

-(NYXImage*)scaleToSize:(CGSize)newSize usingMode:(NYXResizeMode)resizeMode;

// NYXResizeModeScaleToFill resize mode used
-(NYXImage*)scaleToSize:(CGSize)newSize;

// Same as 'scale to fill' in IB.
-(NYXImage*)scaleToFillSize:(CGSize)newSize;

// Preserves aspect ratio. Same as 'aspect fit' in IB.
-(NYXImage*)scaleToFitSize:(CGSize)newSize;

// Preserves aspect ratio. Same as 'aspect fill' in IB.
-(NYXImage*)scaleToCoverSize:(CGSize)newSize;

@end
