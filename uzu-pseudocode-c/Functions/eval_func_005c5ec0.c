// Function : eval_func
// Namespace: 
// Entry    : 005c5ec0
// Prototype: ulong * eval_func(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, long * param_11, uint param_12, char * param_13, undefined8 param_14)
// Body     : 005c5ec0 - 005c60d7


ulong * eval_func(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,long *param_10,long *param_11,uint param_12,char *param_13,
                 undefined8 param_14)

{
  short sVar1;
  long *plVar2;
  ulong *puVar3;
  code *pcVar4;
  uint uVar5;
  float *pfVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  float local_178 [2];
  long alStack_170 [2];
  byte abStack_160 [200];
  undefined8 local_98 [13];
  
  plVar2 = (long *)*param_10;
  if ((plVar2 == (long *)0x0) || (*plVar2 == 0)) {
    puVar3 = (ulong *)0x0;
  }
  else {
    sVar1 = *(short *)((long)param_10 + 0x1a);
    uVar5 = (uint)sVar1;
    if (sVar1 < 0xb) {
      puVar3 = (ulong *)(param_10 + 4);
      pcVar4 = (code *)plVar2[1];
      uVar10 = (ulong)uVar5;
      if (pcVar4 == (code *)PTR_ex_if_00715638) {
        if (0 < sVar1) {
          if (uVar10 - 1 < 7) {
            uVar11 = 0;
          }
          else {
            puVar8 = local_98;
            uVar11 = 0;
            param_1 = 0;
            do {
              puVar8[-0x1c] = 0;
              puVar8[-0x1b] = 0;
              puVar8[-0x18] = 0;
              puVar8[-0x17] = 0;
              puVar8[-0x14] = 0;
              puVar8[-0x13] = 0;
              puVar8[-0x10] = 0;
              puVar8[-0xf] = 0;
              puVar8[-0xc] = 0;
              puVar8[-0xb] = 0;
              puVar8[-8] = 0;
              puVar8[-7] = 0;
              puVar8[-4] = 0;
              puVar8[-3] = 0;
              uVar11 = uVar11 + 8;
              *puVar8 = 0;
              puVar8[1] = 0;
              puVar8 = puVar8 + 0x20;
            } while ((uVar5 & 0xfffffff8) != uVar11);
          }
          if ((ulong)(uVar5 & 7) != 0) {
            lVar7 = 0;
            param_1 = 0;
            do {
              puVar8 = (undefined8 *)((long)local_178 + lVar7 + uVar11 * 0x20);
              *puVar8 = 0;
              puVar8[1] = 0;
              lVar7 = lVar7 + 0x20;
            } while ((ulong)(uVar5 & 7) * 0x20 != lVar7);
          }
        }
        puVar3 = ex_if(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       puVar3,param_11,local_178,(char *)(ulong)param_12,param_14);
      }
      else {
        if (0 < sVar1) {
          pfVar6 = local_178;
          plVar9 = param_11;
          uVar11 = uVar10;
          do {
            pfVar6[0] = 0.0;
            pfVar6[1] = 0.0;
            pfVar6[2] = 0.0;
            pfVar6[3] = 0.0;
            puVar3 = ex_eval(0,param_2,param_5,param_6,param_7,param_8,param_9,puVar3,pfVar6,
                             (undefined *)(ulong)param_12,(char *)plVar9,param_14);
            pfVar6 = pfVar6 + 8;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
          pcVar4 = (code *)plVar2[1];
        }
        (*pcVar4)(param_9,(long)(int)uVar5,local_178,param_11);
      }
      if (0 < sVar1) {
        lVar7 = 0;
        do {
          if (*(long *)((long)alStack_170 + lVar7) == 7) {
            if ((abStack_160[lVar7] & 1) != 0) {
              free(*(void **)((long)local_178 + lVar7));
              abStack_160[lVar7] = abStack_160[lVar7] & 0xfe;
            }
          }
          else if (*(long *)((long)alStack_170 + lVar7) == 0xf) {
            free(*(void **)((long)local_178 + lVar7));
          }
          lVar7 = lVar7 + 0x20;
        } while (uVar10 * 0x20 != lVar7);
      }
    }
    else {
      puVar3 = (ulong *)0x0;
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "expr: eval_func: asking too many arguments\n",param_11,(ulong)uVar5,param_13,
               param_14);
    }
  }
  return puVar3;
}


