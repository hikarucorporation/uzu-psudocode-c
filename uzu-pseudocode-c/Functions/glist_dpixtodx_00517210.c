// Function : glist_dpixtodx
// Namespace: 
// Entry    : 00517210
// Prototype: float glist_dpixtodx(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00517210 - 00517254


float glist_dpixtodx(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  undefined8 extraout_RDX;
  float fVar1;
  float fVar2;
  
  fVar1 = glist_pixelstox((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,param_9,param_10,param_11,param_12,param_13,param_14);
  fVar2 = glist_pixelstox(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                          ,extraout_RDX,param_12,param_13,param_14);
  return (fVar1 - fVar2) * param_1;
}


