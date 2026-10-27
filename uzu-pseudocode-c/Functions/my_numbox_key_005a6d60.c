// Function : my_numbox_key
// Namespace: 
// Entry    : 005a6d60
// Prototype: undefined my_numbox_key(float param_1, double param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005a6d60 - 005a6f1b


void my_numbox_key(float param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long *plVar1;
  ulong uVar2;
  size_t sVar3;
  long lVar4;
  char cVar5;
  float fVar6;
  double dVar7;
  char local_1b [3];
  
  local_1b[1] = 0;
  cVar5 = (char)(int)param_1;
  if (cVar5 == '\0') {
    *(byte *)(param_9 + 0x443) = *(byte *)(param_9 + 0x443) & 0xf7;
    goto LAB_005a6dd2;
  }
  if (9 < (byte)(cVar5 - 0x30U)) {
    if ((byte)(cVar5 - 8U) < 0x3e) {
      uVar2 = (ulong)(byte)(cVar5 - 8U);
      if ((0x2000006800000000U >> (uVar2 & 0x3f) & 1) == 0) {
        if ((0x24UL >> (uVar2 & 0x3f) & 1) != 0) {
          if (*(char *)(param_9 + 0x4c4) != '\0') {
            dVar7 = strtod((char *)(param_9 + 0x4c4),(char **)0x0);
            *(float *)(param_9 + 0x4a0) = (float)dVar7;
            *(undefined1 *)(param_9 + 0x4c4) = 0;
            if (*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x35) {
              dVar7 = (double)(float)dVar7;
              if (dVar7 < *(double *)(param_9 + 0x4a8)) {
                fVar6 = (float)*(double *)(param_9 + 0x4a8);
                *(float *)(param_9 + 0x4a0) = fVar6;
                dVar7 = (double)fVar6;
              }
              param_2 = *(double *)(param_9 + 0x4b0);
              if (param_2 < dVar7) {
                *(float *)(param_9 + 0x4a0) = (float)param_2;
              }
            }
            sys_queuegui(param_9,*(long *)(param_9 + 0x30),0x5a68b0);
          }
          outlet_float((ulong)*(uint *)(param_9 + 0x4a0),param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8,*(long **)(param_9 + 0x18));
          if ((*(byte *)(param_9 + 0x440) & 0x80) == 0) {
            return;
          }
          plVar1 = *(long **)(*(long *)(param_9 + 0x458) + 8);
          if (plVar1 == (long *)0x0) {
            return;
          }
          pd_float(plVar1);
          return;
        }
        if (uVar2 != 0) goto LAB_005a6edb;
        goto LAB_005a6ef3;
      }
    }
    else {
LAB_005a6edb:
      if (cVar5 == '\x7f') {
LAB_005a6ef3:
        sVar3 = strlen((char *)(param_9 + 0x4c4));
        lVar4 = 0;
        if (1 < (int)sVar3) {
          lVar4 = (long)((int)sVar3 + -1);
        }
        *(undefined1 *)(param_9 + 0x4c4 + lVar4) = 0;
        goto LAB_005a6dd2;
      }
      if (cVar5 != 'e') {
        return;
      }
    }
  }
  sVar3 = strlen((char *)(param_9 + 0x4c4));
  if (0x1d < sVar3) {
    return;
  }
  local_1b[0] = cVar5;
  strcat((char *)(param_9 + 0x4c4),local_1b);
LAB_005a6dd2:
  sys_queuegui(param_9,*(long *)(param_9 + 0x30),0x5a68b0);
  return;
}


