// Function : serialize
// Namespace: OT:Lookup
// Entry    : 00439950
// Prototype: undefined8 serialize(ushort * param_1, long param_2, ushort param_3, ushort param_4)
// Body     : 00439950 - 00439b57


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::Lookup::serialize(hb_serialize_context_t*, unsigned int, unsigned int, unsigned int) */

undefined8 __cdecl OT::Lookup::serialize(ushort *param_1,long param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  void *__s;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    return 0;
  }
  pvVar5 = *(void **)(param_2 + 8);
  uVar4 = (long)param_1 + (6 - (long)pvVar5);
  if ((uVar4 < 0x80000000) && ((long)uVar4 <= *(long *)(param_2 + 0x10) - (long)pvVar5)) {
    if ((int)uVar4 != 0) {
      memset(pvVar5,0,uVar4);
      pvVar5 = *(void **)(param_2 + 8);
    }
    *(ulong *)(param_2 + 8) = uVar4 + (long)pvVar5;
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
    *param_1 = param_3 << 8 | param_3 >> 8;
    param_1[1] = param_4 << 8 | param_4 >> 8;
    if (*(int *)(param_2 + 0x2c) != 0) {
      return 0;
    }
    pvVar5 = *(void **)(param_2 + 8);
    uVar4 = (long)param_1 + (6 - (long)pvVar5);
    if ((uVar4 < 0x80000000) && ((long)uVar4 <= *(long *)(param_2 + 0x10) - (long)pvVar5)) {
      if ((int)uVar4 != 0) {
        memset(pvVar5,0,uVar4);
        pvVar5 = *(void **)(param_2 + 8);
      }
      *(ulong *)(param_2 + 8) = uVar4 + (long)pvVar5;
      if (pvVar5 == (void *)0x0) {
        return 0;
      }
      param_1[2] = 0x100;
      if (*(int *)(param_2 + 0x2c) != 0) {
        return 0;
      }
      pvVar5 = *(void **)(param_2 + 8);
      uVar4 = (long)param_1 + (8 - (long)pvVar5);
      lVar2 = *(long *)(param_2 + 0x10) - (long)pvVar5;
      pvVar3 = (void *)CONCAT71((int7)((ulong)lVar2 >> 8),lVar2 < (long)uVar4);
      if ((uVar4 < 0x80000000) && (lVar2 >= (long)uVar4)) {
        if ((int)uVar4 != 0) {
          pvVar3 = memset(pvVar5,0,uVar4);
          pvVar5 = *(void **)(param_2 + 8);
        }
        __s = (void *)(uVar4 + (long)pvVar5);
        *(void **)(param_2 + 8) = __s;
        if (pvVar5 == (void *)0x0) {
          return 0;
        }
        if ((*(byte *)((long)param_1 + 3) & 0x10) == 0) {
          return CONCAT71((int7)((ulong)pvVar3 >> 8),1);
        }
        if (*(int *)(param_2 + 0x2c) != 0) {
          return 0;
        }
        uVar4 = (long)param_1 +
                ((ulong)((uint)(ushort)(param_1[2] << 8 | param_1[2] >> 8) * 2 + 8) - (long)__s);
        if ((uVar4 < 0x80000000) && ((long)uVar4 <= *(long *)(param_2 + 0x10) - (long)__s)) {
          if ((int)uVar4 != 0) {
            memset(__s,0,uVar4);
            __s = *(void **)(param_2 + 8);
          }
          *(ulong *)(param_2 + 8) = uVar4 + (long)__s;
          if (__s == (void *)0x0) {
            return 0;
          }
          uVar1 = param_1[2];
          param_1[(ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + 3] = 0;
          return CONCAT71((uint7)(byte)uVar1,1);
        }
      }
    }
  }
  *(undefined4 *)(param_2 + 0x2c) = 4;
  return 0;
}


