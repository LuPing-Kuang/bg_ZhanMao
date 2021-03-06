//
//  BaseModel.h
//  yangsheng
//
//  Created by Macx on 17/7/7.
//  Copyright © 2017年 jam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZZModel.h"

@interface BaseModel : ZZModel

@property (nonatomic,strong) NSString* cid;
@property (nonatomic,strong) NSString* name;
@property (nonatomic,strong) NSString* thumb;
@property (nonatomic,assign) NSInteger count;

@property (nonatomic,strong) NSString* idd;
@property (nonatomic,strong) NSString* post_title;
@property (nonatomic,strong) NSString* post_excerpt;
@property (nonatomic,assign) NSInteger post_hits;

@property (nonatomic,strong) NSString* post_content;
@property (nonatomic,strong) NSString* mp4_path;

@property (nonatomic,strong) NSString* post_modified;

@property (nonatomic,strong) NSString* ios_content;

@property (nonatomic,strong) NSString* post_subtitle;

@property (nonatomic,strong) NSString* ddescription;

@property (nonatomic,strong) NSString* post_author;
@property (nonatomic,strong) NSString* post_label;

//@property (nonatomic,strong) NSString* pid;

//collection
@property (nonatomic,strong) NSString* createtime;

@property (nonatomic,strong) NSString* title;

@property (nonatomic,strong) NSArray* smeta;
@property (nonatomic,assign) NSInteger pic_count;

@end
