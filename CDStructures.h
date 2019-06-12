//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double _field1;
    double _field2;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct NSDictionary {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIView {
    Class _field1;
};

struct WebPDecBuffer {
    int colorspace;
    int width;
    int height;
    int is_external_memory;
    union {
        struct WebPRGBABuffer RGBA;
        struct WebPYUVABuffer YUVA;
    } u;
    unsigned int pad[4];
    char *private_memory;
};

struct WebPRGBABuffer {
    char *rgba;
    int stride;
    unsigned long long size;
};

struct WebPYUVABuffer {
    char *y;
    char *u;
    char *v;
    char *a;
    int y_stride;
    int u_stride;
    int v_stride;
    int a_stride;
    unsigned long long y_size;
    unsigned long long u_size;
    unsigned long long v_size;
    unsigned long long a_size;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct signal_protocol_address {
    char *name;
    unsigned long long name_len;
    int device_id;
};

struct tsp_address {
    struct signal_protocol_address base;
    void *user_data;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    _Bool _field6;
    _Bool _field7;
} CDStruct_e38957e0;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int :1;
    unsigned int :1;
} CDStruct_7a45bd0d;

typedef struct {
    unsigned long long width;
    unsigned long long height;
} CDStruct_5e758c1a;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int searchResultType:3;
    unsigned int hasRecordedImpression:1;
    unsigned int hasRecordedDwellImpression:1;
    unsigned int autoExpandMode:2;
    unsigned int isDuplicateContentIDInstance:2;
    unsigned int isCurrentlyFirstImpression:2;
} CDStruct_ce75bf4d;

typedef struct {
    double playing;
    double paused;
    double waiting;
    double initialPreferredPeakBitrate;
    double bitrateForInitialVariantSelection;
} CDStruct_15b96cbe;

typedef struct {
    double topLeft;
    double topRight;
    double bottomLeft;
    double bottomRight;
} CDStruct_ba12166d;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    long long primaryKey;
    unsigned long long secondaryKey;
} CDStruct_778018ce;

typedef struct {
    long long targetVariantMode;
    double targetVariantScaleLimit;
    long long variantOffset;
} CDStruct_bfba3349;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    CDStruct_c3b9c2ee _field1;
    CDStruct_c3b9c2ee _field2;
} CDStruct_90e2a262;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

typedef struct {
    struct CGPoint _field1;
    struct CGSize _field2;
    _Bool _field3;
} CDStruct_50901d9f;

typedef struct {
    struct CLLocationCoordinate2D _field1;
    CDStruct_c3b9c2ee _field2;
} CDStruct_26e8d939;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    struct CGRect _field5;
    struct CGRect _field6;
    struct CGRect _field7;
    struct CGRect _field8;
    struct CGRect _field9;
} CDStruct_981d91ea;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    struct CGRect _field5;
    struct CGRect _field6;
    struct CGRect _field7;
    struct CGRect _field8;
} CDStruct_e287b37a;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    struct CGRect _field4;
} CDStruct_60d9add8;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
} CDStruct_b7523c42;

// Ambiguous groups
typedef struct {
    unsigned int everEditedText:1;
    unsigned int everExceededMaxChar:1;
    unsigned int everWarnedMaxCharLimit:1;
} CDStruct_f33a756f;

typedef struct {
    unsigned int :1;
    unsigned int :1;
} CDStruct_d7010776;

