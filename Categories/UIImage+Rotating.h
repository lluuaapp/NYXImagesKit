//
//  UIImage+Rotation.h
//  NYXImagesKit
//
//  Created by @Nyx0uf on 02/05/11.
//  Copyright 2012 Nyx0uf. All rights reserved.
//  www.cocoaintheshell.com
//


#import "NYXImagesHelper.h"


@interface NYXImage (NYX_Rotating)

-(NYXImage*)rotateInRadians:(float)radians;

-(NYXImage*)rotateInDegrees:(float)degrees;

-(NYXImage*)rotateImagePixelsInRadians:(float)radians;

-(NYXImage*)rotateImagePixelsInDegrees:(float)degrees;

-(NYXImage*)verticalFlip;

-(NYXImage*)horizontalFlip;

@end
