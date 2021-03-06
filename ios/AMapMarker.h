#import "AMapView.h"
#import "AMapOverlay.h"

@interface AMapMarker : UIView <MAAnnotation, AMapOverlayDelegate>

@property(nonatomic, copy) RCTBubblingEventBlock onPress;
@property(nonatomic, copy) RCTBubblingEventBlock onInfoWindowPress;
@property(nonatomic, copy) RCTBubblingEventBlock onDragStart;
@property(nonatomic, copy) RCTBubblingEventBlock onDrag;
@property(nonatomic, copy) RCTBubblingEventBlock onDragEnd;
@property(nonatomic, assign) BOOL dragging;

- (CLLocationCoordinate2D)coordinate;
- (NSString *)title;
- (NSString *)subtitle;

- (BOOL)active;
- (MAAnnotationView *)annotationView;

- (void)setMapView:(AMapView *)mapView;
- (void)setCoordinate:(CLLocationCoordinate2D)coordinate;

@end
