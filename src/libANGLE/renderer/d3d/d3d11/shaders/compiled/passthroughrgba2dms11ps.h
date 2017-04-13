#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 6.3.9600.16384
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// TextureF_MS                      texture  float4        2dMS    0        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_POSITION              0   xyzw        0      POS   float
// TEXCORD                  0   xy          1     NONE   float   xy
// SV_SAMPLEINDEX           0   x           2   SAMPLE    uint   x
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_TARGET                0   xyzw        0   TARGET   float   xyzw
//
// Pixel Shader runs at sample frequency
//
ps_4_1
dcl_globalFlags refactoringAllowed
dcl_resource_texture2dms(0) (float,float,float,float) t0
dcl_input_ps linear v1.xy
dcl_input_ps_sgv v2.x, sampleIndex
dcl_output o0.xyzw
dcl_temps 1
ftou r0.xy, v1.xyxx
mov r0.zw, l(0,0,0,0)
ldms o0.xyzw, r0.xyzw, t0.xyzw, v2.x
ret
// Approximately 4 instruction slots used
#endif

const BYTE g_PS_PassthroughRGBA2DMS[] = {
    68,  88,  66,  67,  153, 49,  112, 211, 187, 16,  68,  138, 16,  138, 141, 230, 21,  218, 248,
    134, 1,   0,   0,   0,   144, 2,   0,   0,   5,   0,   0,   0,   52,  0,   0,   0,   180, 0,
    0,   0,   48,  1,   0,   0,   100, 1,   0,   0,   20,  2,   0,   0,   82,  68,  69,  70,  120,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   28,  0,   0,   0,
    1,   4,   255, 255, 0,   1,   0,   0,   69,  0,   0,   0,   60,  0,   0,   0,   2,   0,   0,
    0,   5,   0,   0,   0,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,
    0,   0,   13,  0,   0,   0,   84,  101, 120, 116, 117, 114, 101, 77,  0,   77,  105, 99,  114,
    111, 115, 111, 102, 116, 32,  40,  82,  41,  32,  72,  76,  83,  76,  32,  83,  104, 97,  100,
    101, 114, 32,  67,  111, 109, 112, 105, 108, 101, 114, 32,  54,  46,  51,  46,  57,  54,  48,
    48,  46,  49,  54,  51,  56,  52,  0,   171, 73,  83,  71,  78,  116, 0,   0,   0,   3,   0,
    0,   0,   8,   0,   0,   0,   80,  0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   3,
    0,   0,   0,   0,   0,   0,   0,   15,  0,   0,   0,   92,  0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   3,   0,   0,   0,   1,   0,   0,   0,   3,   3,   0,   0,   100, 0,   0,
    0,   0,   0,   0,   0,   10,  0,   0,   0,   1,   0,   0,   0,   2,   0,   0,   0,   1,   1,
    0,   0,   83,  86,  95,  80,  79,  83,  73,  84,  73,  79,  78,  0,   84,  69,  88,  67,  79,
    82,  68,  0,   83,  86,  95,  83,  65,  77,  80,  76,  69,  73,  78,  68,  69,  88,  0,   171,
    79,  83,  71,  78,  44,  0,   0,   0,   1,   0,   0,   0,   8,   0,   0,   0,   32,  0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   15,  0,
    0,   0,   83,  86,  95,  84,  65,  82,  71,  69,  84,  0,   171, 171, 83,  72,  68,  82,  168,
    0,   0,   0,   65,  0,   0,   0,   42,  0,   0,   0,   106, 8,   0,   1,   88,  32,  0,   4,
    0,   112, 16,  0,   0,   0,   0,   0,   85,  85,  0,   0,   98,  16,  0,   3,   50,  16,  16,
    0,   1,   0,   0,   0,   99,  8,   0,   4,   18,  16,  16,  0,   2,   0,   0,   0,   10,  0,
    0,   0,   101, 0,   0,   3,   242, 32,  16,  0,   0,   0,   0,   0,   104, 0,   0,   2,   1,
    0,   0,   0,   28,  0,   0,   5,   50,  0,   16,  0,   0,   0,   0,   0,   70,  16,  16,  0,
    1,   0,   0,   0,   54,  0,   0,   8,   194, 0,   16,  0,   0,   0,   0,   0,   2,   64,  0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   46,  0,
    0,   9,   242, 32,  16,  0,   0,   0,   0,   0,   70,  14,  16,  0,   0,   0,   0,   0,   70,
    126, 16,  0,   0,   0,   0,   0,   10,  16,  16,  0,   2,   0,   0,   0,   62,  0,   0,   1,
    83,  84,  65,  84,  116, 0,   0,   0,   4,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,
    0,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   1,   0,   0,   0};
