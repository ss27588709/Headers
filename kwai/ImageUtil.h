//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIDetector;

@interface ImageUtil : NSObject
{
    int myWidth;
    int myHeight;
    CIDetector *faceDetector;
    int buRed;
    int buGreen;
    int buBlue;
}

+ (id)defaultVideoAssetsLibrary;
+ (id)defaultAssetsLibrary;
+ (id)addImage:(id)arg1 toImage:(id)arg2 andAlpha:(double)arg3 atRect:(struct CGRect)arg4;
+ (id)addImage:(id)arg1 toImage:(id)arg2 andAlpha:(double)arg3;
+ (id)addImage:(id)arg1 toImage:(id)arg2 atRect:(struct CGRect)arg3;
+ (id)addRefImage:(id)arg1 toImage:(id)arg2 atRect:(struct CGRect)arg3;
+ (id)addImage:(id)arg1 toImage:(id)arg2 andModel:(int)arg3;
+ (id)addImage:(id)arg1 toImage:(id)arg2;
+ (id)rotateImage:(id)arg1 toOrient:(long long)arg2 toSize:(struct CGSize)arg3;
+ (id)rotateImage:(id)arg1 toOrient:(long long)arg2;
+ (id)image:(id)arg1 scaledToFitSize:(struct CGSize)arg2;
+ (id)image:(id)arg1 fitInSize:(struct CGSize)arg2;
+ (id)topCutimage:(id)arg1 fitInSize:(struct CGSize)arg2;
+ (struct CGSize)fitSize:(struct CGSize)arg1 inSize:(struct CGSize)arg2;
+ (id)getInstance;
- (void).cxx_destruct;
- (id)MV_fadeChange:(void *)arg1;
- (id)colormatrix_fuchouzhe:(void *)arg1;
- (id)colormatrix_abaose:(void *)arg1;
- (id)colormatrix_shuiyue:(void *)arg1;
- (id)colormatrix_xuanse:(void *)arg1;
- (id)colormatrix_huangse:(void *)arg1;
- (id)colormatrix_lanlan:(void *)arg1;
- (id)colormatrix_heibai:(void *)arg1;
- (id)colormatrix_huanghui:(void *)arg1;
- (id)colormatrix_lananhui:(void *)arg1;
- (id)colormatrix_lanse:(void *)arg1;
- (id)colormatrix_honghong:(void *)arg1;
- (id)colormatrix_qingxin:(void *)arg1;
- (id)colormatrix_huanghuang:(void *)arg1;
- (id)colormatrix_zihong:(void *)arg1;
- (id)colormatrix_huanghong:(void *)arg1;
- (id)colormatrix_hongse:(void *)arg1;
- (id)colormatrix_pianhong:(void *)arg1;
- (id)colormatrix_huibai:(void *)arg1;
- (id)colormatrix_nuanse:(void *)arg1;
- (id)colormatrix_lanqing:(void *)arg1;
- (id)colormatrix_lvhuang:(void *)arg1;
- (id)colormatrix_yinhong:(void *)arg1;
- (id)colormatrix_lanzi:(void *)arg1;
- (id)colormatrix_lianglv:(void *)arg1;
- (id)colormatrix_abao:(void *)arg1;
- (id)colormatrix_danlan:(void *)arg1;
- (id)colormatrix_qinglv:(void *)arg1;
- (id)colormatrix_danlv:(void *)arg1;
- (id)colormatrix_danhuang:(void *)arg1;
- (id)colormatrix_weizi:(void *)arg1;
- (id)colormatrix_wenhong:(void *)arg1;
- (id)colormatrix_qingzi:(void *)arg1;
- (id)colormatrix_lvhong:(void *)arg1;
- (id)colormatrix_nuanhong:(void *)arg1;
- (id)colormatrix_nuanzi:(void *)arg1;
- (id)colormatrix_nuanyangyang:(void *)arg1;
- (id)colormatrix_gete2:(void *)arg1;
- (id)colormatrix_liujin:(void *)arg1;
- (id)colormatrix_gutong:(void *)arg1;
- (id)colormatrix_xuancai:(void *)arg1;
- (id)colormatrix_hdr:(void *)arg1;
- (id)colormatrix_yinxiang:(void *)arg1;
- (id)colormatrix_fugu:(void *)arg1;
- (id)colormatrix_jiaopian:(void *)arg1;
- (id)colormatrix_xuancailomo:(void *)arg1;
- (id)colormatrix_jingdianlomo:(void *)arg1;
- (id)colormatrix_lengyan:(void *)arg1;
- (id)colormatrix_xiaodanya:(void *)arg1;
- (id)colormatrix_xiaoqingxin:(void *)arg1;
- (id)colormatrix_sennv:(void *)arg1;
- (id)colormatrix_laozhaopian:(void *)arg1;
- (id)colormatrix_afanda:(void *)arg1;
- (id)colormatrix_yese:(void *)arg1;
- (id)colormatrix_menghuan:(void *)arg1;
- (id)colormatrix_landiao:(void *)arg1;
- (id)colormatrix_guangyun:(void *)arg1;
- (id)colormatrix_langman:(void *)arg1;
- (id)colormatrix_qingning:(void *)arg1;
- (id)colormatrix_jiuhong:(void *)arg1;
- (id)colormatrix_danya:(void *)arg1;
- (id)colormatrix_ruise:(void *)arg1;
- (id)colormatrix_gete:(void *)arg1;
- (id)colormatrix_huajiu:(void *)arg1;
- (id)colormatrix_lomo:(void *)arg1;
- (id)colormatrix:(void *)arg1 with:(const float *)arg2;
- (id)direst_heibai:(void *)arg1;
- (id)erode5:(void *)arg1;
- (id)direst_buguang:(void *)arg1;
- (id)softGlow2:(void *)arg1;
- (id)negativeFilm:(void *)arg1;
- (id)invert:(void *)arg1;
- (id)sketch:(void *)arg1;
- (id)oldPhoto:(void *)arg1;
- (id)grayScale:(void *)arg1;
- (id)noBlackLomo3:(void *)arg1;
- (id)noBlackLomo2:(void *)arg1;
- (id)noBlackLomo:(void *)arg1;
- (id)lomo2:(void *)arg1;
- (id)lomo:(void *)arg1;
- (id)lomoPs15:(void *)arg1;
- (id)lomoPs14:(void *)arg1;
- (id)lomoPs13:(void *)arg1;
- (id)lomoPs12:(void *)arg1;
- (id)lomoPs11:(void *)arg1;
- (id)lomoPs10:(void *)arg1;
- (id)lomoPs9:(void *)arg1;
- (id)lomoPs8:(void *)arg1;
- (id)lomoPs7:(void *)arg1;
- (id)lomoPs6:(void *)arg1;
- (id)lomoPs5:(void *)arg1;
- (id)lomoPs4:(void *)arg1;
- (id)lomoPs3:(void *)arg1;
- (id)lomoPs2:(void *)arg1;
- (id)lomoPs1:(void *)arg1;
- (id)bopo:(void *)arg1;
- (id)boma:(void *)arg1;
- (id)scanLine:(void *)arg1;
- (id)backColor:(void *)arg1;
- (id)memory:(void *)arg1;
- (id)cartoon:(void *)arg1;
- (id)blackWhite:(void *)arg1;
- (id)asm_heibai:(void *)arg1;
- (id)asm_yellowDark:(void *)arg1;
- (id)asm_blueDark:(void *)arg1;
- (id)asm_blue:(void *)arg1;
- (id)asm_honghong:(void *)arg1;
- (id)asm_qingxin:(void *)arg1;
- (id)asm_yellowYellow:(void *)arg1;
- (id)asm_redDark:(void *)arg1;
- (id)asm_yellowRed:(void *)arg1;
- (id)asm_red:(void *)arg1;
- (id)asm_greenRed:(void *)arg1;
- (id)asm_lemo:(void *)arg1;
- (id)blackWhiteNoAv:(void *)arg1;
- (id)blackWhiteNoAvRed:(void *)arg1;
- (id)chongying:(void *)arg1;
- (id)faceCry:(void *)arg1;
- (id)faceBeauty:(void *)arg1;
- (id)faceOld:(void *)arg1;
- (id)faceSmallFace:(void *)arg1;
- (id)faceBigFace:(void *)arg1;
- (id)faceSwBigMouth:(void *)arg1;
- (id)faceSmallEye:(void *)arg1;
- (id)faceBigEye:(void *)arg1;
- (void)freeFace;
- (id)makeImageFromData:(void *)arg1;
- (id)changeLevel:(void *)arg1;
- (void)setW:(int)arg1 andH:(int)arg2;
- (id)init;

@end
