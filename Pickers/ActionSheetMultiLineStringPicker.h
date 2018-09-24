//
//  ActionSheetMultiLineStringPicker.h
//  CoreActionSheetPicker
//
//  Created by Bartosz Byra on 24/09/2018.
//  Copyright © 2018 Petr Korolev. All rights reserved.
//

#import <CoreActionSheetPicker/CoreActionSheetPicker.h>

@class ActionSheetStringPicker;
typedef void(^ActionStringDoneBlock)(ActionSheetStringPicker *picker, NSInteger selectedIndex, id selectedValue);
typedef void(^ActionStringCancelBlock)(ActionSheetStringPicker *picker);

@interface ActionSheetMultiLineStringPicker : AbstractActionSheetPicker <UIPickerViewDelegate, UIPickerViewDataSource>

+ (instancetype)showPickerWithTitle:(NSString *)title rows:(NSArray *)strings initialSelection:(NSInteger)index doneBlock:(ActionStringDoneBlock)doneBlock cancelBlock:(ActionStringCancelBlock)cancelBlock origin:(id)origin;

@end
