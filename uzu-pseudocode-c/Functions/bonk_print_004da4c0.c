// Function : bonk_print
// Namespace: 
// Entry    : 004da4c0
// Prototype: undefined bonk_print(float param_1, undefined8 param_2, double param_3, double param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 004da4c0 - 004da7db


void bonk_print(float param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  float fVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qa;
  float fVar9;
  double dVar10;
  float fVar11;
  undefined4 uVar12;
  
  dVar10 = (double)*(float *)(param_9 + 100);
  post((double)*(float *)(param_9 + 0x68),dVar10,param_3,param_4,param_5,param_6,param_7,param_8,
       "thresh %f %f");
  uVar8 = post((double)*(float *)(param_9 + 0x70),dVar10,param_3,param_4,param_5,param_6,param_7,
               param_8,"mask %d %f");
  post(uVar8,dVar10,param_3,param_4,param_5,param_6,param_7,param_8,"attack-frames %d");
  post((double)*(float *)(param_9 + 0x7c),dVar10,param_3,param_4,param_5,param_6,param_7,param_8,
       "debounce %f");
  uVar8 = post((double)*(float *)(param_9 + 0x6c),dVar10,param_3,param_4,param_5,param_6,param_7,
               param_8,"minvel %f");
  uVar8 = post(uVar8,dVar10,param_3,param_4,param_5,param_6,param_7,param_8,"spew %d");
  uVar8 = post(uVar8,dVar10,param_3,param_4,param_5,param_6,param_7,param_8,"useloudness %d");
  uVar8 = post(uVar8,dVar10,param_3,param_4,param_5,param_6,param_7,param_8,"number of templates %d"
              );
  if (*(int *)(param_9 + 0x264c) != 0) {
    post(uVar8,dVar10,param_3,param_4,param_5,param_6,param_7,param_8,"learn mode");
  }
  uVar8 = 0;
  dVar10 = (double)(ulong)(uint)param_1;
  if (param_1 != 0.0) {
    iVar3 = *(int *)(param_9 + 0x2630);
    if (0 < iVar3) {
      if (iVar3 == 1) {
        iVar3 = *(int *)(param_9 + 0x50);
        if (iVar3 != 0) {
          lVar6 = *(long *)(param_9 + 0x2628) + 0x10;
          do {
            param_3 = (double)*(float *)(lVar6 + -0xc);
            post((double)*(float *)(lVar6 + -0x10),
                 (double)*(float *)(lVar6 + (long)*(int *)(param_9 + 0x2658) * 4),param_3,param_4,
                 param_5,param_6,param_7,param_8,"pow %f mask %f before %f count %d");
            lVar6 = lVar6 + 0x30;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        lVar6 = *(long *)(param_9 + 0x2628) + 0x10;
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
          uVar8 = post(uVar8,dVar10,param_3,param_4,param_5,param_6,param_7,param_8,"input %d:");
          iVar7 = *(int *)(param_9 + 0x50);
          if (iVar7 != 0) {
            lVar4 = lVar6;
            do {
              dVar10 = (double)*(float *)(lVar4 + (long)*(int *)(param_9 + 0x2658) * 4);
              param_3 = (double)*(float *)(lVar4 + -0xc);
              uVar8 = post((double)*(float *)(lVar4 + -0x10),dVar10,param_3,param_4,param_5,param_6,
                           param_7,param_8,"pow %f mask %f before %f count %d");
              lVar4 = lVar4 + 0x30;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          lVar6 = lVar6 + 0x2598;
        } while (iVar5 != iVar3);
      }
    }
    fVar9 = *(float *)(param_9 + 0x265c) / (float)*(int *)(param_9 + 0x48);
    dVar10 = (double)(ulong)(uint)fVar9;
    uVar8 = post((double)fVar9,dVar10,param_3,param_4,param_5,param_6,param_7,param_8,
                 "bin size %.2f Hz ... filters:");
    if (0 < *(int *)(param_9 + 0x50)) {
      lVar4 = 0x14;
      lVar6 = 0;
      do {
        lVar2 = *(long *)(*(long *)(param_9 + 0x98) + 0x18);
        fVar9 = *(float *)(lVar2 + -4 + lVar4);
        uVar12 = 0;
        fVar11 = DAT_005d9038 / (float)*(int *)(param_9 + 0x48);
        dVar10 = (double)fVar9;
        fVar1 = *(float *)(lVar2 + lVar4);
        param_3 = (double)(*(float *)(param_9 + 0x265c) * fVar1 * fVar11);
        param_4 = (double)fVar1;
        post((double)(*(float *)(param_9 + 0x265c) * fVar9 * fVar11),dVar10,param_3,param_4,
             (ulong)(uint)fVar11,param_6,param_7,param_8,
             "    %2d  cf %.2f(%.2f bins) bw %.2f(%.2f) nhops %d hop %d skip %d npoints %d");
        param_5 = CONCAT44(uVar12,fVar11);
        lVar6 = lVar6 + 1;
        lVar4 = lVar4 + 0x20;
        uVar8 = extraout_XMM0_Qa;
      } while (lVar6 < *(int *)(param_9 + 0x50));
    }
  }
  if (*(int *)(param_9 + 0x2648) == 0) {
    return;
  }
  post(uVar8,dVar10,param_3,param_4,param_5,param_6,param_7,param_8,"debug mode");
  return;
}


