

#import <UIKit/UIKit.h>

@interface MyCarthageView : UIView

/**
 * Carthage技能
 */
@property (nonatomic, copy) NSString *carthageSkill;

/**
 *  得到Carthage技能
 */
- (NSString *)getCarthageSkill;

@end
