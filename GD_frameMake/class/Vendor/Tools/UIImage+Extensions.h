//
//  UIImage+Extensions.h
//  GD_frameMake
//
//  Created by 东 on 8/18/13.
//  Copyright (c) 2013 东. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
CGFloat DegreesToRadians(CGFloat degrees);
CGFloat RadiansToDegrees(CGFloat radians);

@interface UIImage (GD_Extensions)

- (UIImage *)imageAtRect:(CGRect)rect;- (UIImage *)imageByScalingProportionallyToSize:(CGSize)targetSize;
- (UIImage *)imageByScalingToSize:(CGSize)targetSize;
- (UIImage *)imageRotatedByRadians:(CGFloat)radians;
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees;

- (UIImage *)addImage:(UIImage *)image1 toImage:(UIImage *)image2;
- (UIImage *) imageWithBackgroundColor:(UIColor *)bgColor
                           shadeAlpha1:(CGFloat)alpha1
                           shadeAlpha2:(CGFloat)alpha2
                           shadeAlpha3:(CGFloat)alpha3
                           shadowColor:(UIColor *)shadowColor
                          shadowOffset:(CGSize)shadowOffset
                            shadowBlur:(CGFloat)shadowBlur;
- (UIImage *)imageWithShadowColor:(UIColor *)shadowColor
                     shadowOffset:(CGSize)shadowOffset
                       shadowBlur:(CGFloat)shadowBlur;
- (UIImage *)imageByApplyingAlpha:(CGFloat)alpha;


@end;