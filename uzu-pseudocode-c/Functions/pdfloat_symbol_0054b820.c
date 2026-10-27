// Function : pdfloat_symbol
// Namespace: 
// Entry    : 0054b820
// Prototype: undefined pdfloat_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054b820 - 0054b87f


void pdfloat_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,long *param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  float fVar1;
  double dVar2;
  undefined8 uVar3;
  char *local_18;
  
  local_18 = (char *)0x0;
  dVar2 = strtod((char *)*param_10,&local_18);
  fVar1 = (float)dVar2;
  uVar3 = CONCAT44((int)((ulong)dVar2 >> 0x20),fVar1);
  if ((fVar1 == 0.0) && ((char *)*param_10 == local_18)) {
    pd_error(uVar3,0,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "couldn\'t convert %s to float",(char *)*param_10,param_12,param_13,param_14);
    return;
  }
  *(float *)(param_9 + 0x30) = fVar1;
  outlet_float(uVar3,0,param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


