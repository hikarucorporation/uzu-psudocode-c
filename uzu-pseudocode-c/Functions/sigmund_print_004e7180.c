// Function : sigmund_print
// Namespace: 
// Entry    : 004e7180
// Prototype: undefined sigmund_print(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 004e7180 - 004e741e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sigmund_print(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  float fVar1;
  char *pcVar2;
  float fVar3;
  undefined8 uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar4 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               "sigmund~ version 0.08 settings:");
  uVar4 = post(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"npts %d");
  uVar4 = post(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"hop %d");
  post(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"npeak %d");
  post((double)*(float *)(param_9 + 0x7c),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "maxfreq %g");
  post((double)*(float *)(param_9 + 0x80),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "vibrato %g");
  post((double)*(float *)(param_9 + 0x84),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "stabletime %g");
  post((double)*(float *)(param_9 + 0x88),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "growth %g");
  post((double)*(float *)(param_9 + 0x8c),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "minpower %g");
  post((double)*(float *)(param_9 + 0xd8),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "amppowerlaw %g");
  post((double)*(float *)(param_9 + 0xdc),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "quality %g");
  fVar1 = *(float *)(param_9 + 0xd0);
  uVar5 = (ulong)(uint)fVar1;
  dVar7 = 0.0;
  if (0.0 <= fVar1) {
    dVar7 = (double)*(float *)(param_9 + 0xd4);
    uVar5 = post((double)fVar1,dVar7,param_3,param_4,param_5,param_6,param_7,param_8,
                 "nharmonics %f %f");
    pcVar2 = "resulting harmonic weights:";
  }
  else {
    pcVar2 = "harmonic weights specified individually:";
  }
  post(uVar5,dVar7,param_3,param_4,param_5,param_6,param_7,param_8,pcVar2);
  post((double)*(float *)(param_9 + 0x90),(double)*(float *)(param_9 + 0x94),
       (double)*(float *)(param_9 + 0x98),(double)*(float *)(param_9 + 0x9c),
       (double)*(float *)(param_9 + 0xa0),(double)*(float *)(param_9 + 0xa4),
       (double)*(float *)(param_9 + 0xa8),(double)*(float *)(param_9 + 0xac),
       "%5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f");
  dVar7 = (double)*(float *)(param_9 + 0xbc);
  dVar8 = (double)*(float *)(param_9 + 0xc0);
  dVar9 = (double)*(float *)(param_9 + 0xc4);
  dVar10 = (double)*(float *)(param_9 + 200);
  dVar11 = (double)*(float *)(param_9 + 0xcc);
  post((double)*(float *)(param_9 + 0xb0),(double)*(float *)(param_9 + 0xb4),
       (double)*(float *)(param_9 + 0xb8),dVar7,dVar8,dVar9,dVar10,dVar11,
       "%5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f");
  fVar1 = *(float *)(param_9 + 0x4c);
  if (0.0 < fVar1) {
    fVar3 = (fVar1 + fVar1) / (float)*(int *)(param_9 + 0x54);
    if (fVar3 <= 0.0) {
      dVar6 = DAT_00652e18;
    }
    else {
      dVar6 = log((double)fVar3 * _DAT_00652450);
      dVar6 = (double)(float)(dVar6 * _DAT_00652458);
    }
    post((double)fVar1,dVar6,(double)fVar1,dVar7,dVar8,dVar9,dVar10,dVar11,
         "minimum possible pitch at sample rate %f is %f");
  }
  *(undefined4 *)(param_9 + 0x5c) = 1;
  return;
}


