// Function : sigfiddle_setnpoints
// Namespace: 
// Entry    : 004e1120
// Prototype: undefined4 sigfiddle_setnpoints(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004e1120 - 004e14aa


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
sigfiddle_setnpoints
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          undefined8 param_10,undefined8 param_11,undefined8 param_12,char *param_13,
          undefined8 param_14)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  double dVar4;
  void *pvVar5;
  void *pvVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  double local_48;
  undefined8 uStack_40;
  
  fVar15 = (float)param_1;
  if (*(void **)(param_9 + 0x38) != (void *)0x0) {
    param_1 = freebytes(*(void **)(param_9 + 0x38));
    *(undefined8 *)(param_9 + 0x38) = 0;
  }
  if (*(void **)(param_9 + 0x40) != (void *)0x0) {
    param_1 = freebytes(*(void **)(param_9 + 0x40));
    *(undefined8 *)(param_9 + 0x40) = 0;
  }
  uVar10 = (uint)fVar15;
  if (*(void **)(param_9 + 0x48) != (void *)0x0) {
    param_1 = freebytes(*(void **)(param_9 + 0x48));
    *(undefined8 *)(param_9 + 0x48) = 0;
  }
  *(undefined4 *)(param_9 + 0x68) = 0;
  if (uVar10 - 0x2001 < 0xffffe07f) {
    uVar10 = 0x400;
    param_1 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                       "fiddle~: npoints out of range; using %d",0x400,param_12,param_13,param_14);
  }
  puVar14 = (uint *)(param_9 + 0x68);
  bVar7 = 0xff;
  uVar8 = uVar10;
  do {
    bVar7 = bVar7 + 1;
    bVar2 = 1 < uVar8;
    uVar8 = (int)uVar8 >> 1;
  } while (bVar2);
  if (uVar10 != 1 << (bVar7 & 0x1f)) {
    uVar9 = 0xffffffff;
    do {
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar8;
      bVar2 = 1 < uVar10;
      uVar10 = (int)uVar10 >> 1;
    } while (bVar2);
    uVar10 = 1 << ((byte)uVar8 & 0x1f);
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "fiddle~: npoints not a power of 2; using %d",(ulong)uVar10,uVar9,param_13,param_14);
  }
  *(int *)(param_9 + 0x68) = (int)uVar10 >> 1;
  pvVar5 = getbytes((long)((int)uVar10 >> 1) << 2);
  *(void **)(param_9 + 0x38) = pvVar5;
  pvVar6 = (void *)0x0;
  if (pvVar5 != (void *)0x0) {
    pvVar6 = getbytes((long)*(int *)(param_9 + 0x68) * 8 + 0x50);
    *(void **)(param_9 + 0x40) = pvVar6;
    if (pvVar6 != (void *)0x0) {
      pvVar6 = getbytes((long)*(int *)(param_9 + 0x68) << 3);
      *(void **)(param_9 + 0x48) = pvVar6;
      if (pvVar6 != (void *)0x0) {
        uVar8 = *puVar14;
        uVar9 = (ulong)uVar8;
        if (0 < (int)uVar8) {
          memset(*(void **)(param_9 + 0x38),0,uVar9 * 4);
        }
        if (-0x14 < (int)uVar10) {
          uVar12 = (ulong)(uVar10 + 0x13);
          if ((int)(uVar10 + 0x13) < 1) {
            uVar12 = 0;
          }
          memset(*(void **)(param_9 + 0x40),0,uVar12 * 4 + 4);
        }
        if (0 < (int)uVar8) {
          if (uVar8 == 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = (ulong)(uVar8 & 0xfffffffe);
            dVar4 = _DAT_005d9000 / (double)(int)uVar10;
            local_68._8_4_ = SUB84(dVar4,0);
            local_68._0_8_ = dVar4;
            local_68._12_4_ = (int)((ulong)dVar4 >> 0x20);
            uVar12 = 0;
            iVar16 = _DAT_00651f90;
            iVar17 = _UNK_00651f94;
            do {
              local_58 = (double)iVar16 * _DAT_006525a0 * (double)local_68._0_8_;
              dStack_50 = (double)iVar17 * _UNK_006525a8 * (double)local_68._8_8_;
              sincos(local_58,&local_80,&local_88);
              local_48 = local_88;
              uStack_40 = 0;
              sincos(dStack_50,&local_70,&local_78);
              uVar3 = CONCAT44((float)local_70,(float)local_80) ^
                      CONCAT44(_UNK_006524b4,_DAT_006524b0);
              puVar1 = (undefined8 *)((long)pvVar6 + uVar12 * 8);
              *puVar1 = CONCAT44((int)uVar3,(float)local_48);
              *(float *)(puVar1 + 1) = (float)local_78;
              *(int *)((long)puVar1 + 0xc) = (int)(uVar3 >> 0x20);
              uVar12 = uVar12 + 2;
              iVar16 = iVar16 + _DAT_00651fa0;
              iVar17 = iVar17 + _UNK_00651fa4;
            } while (uVar13 != uVar12);
            if (uVar13 == uVar9) goto LAB_004e1484;
          }
          dVar4 = _DAT_005d9000 / (double)(int)uVar10;
          do {
            sincos((double)(int)uVar13 * _DAT_006524a8 * dVar4,&local_90,&local_98);
            *(float *)((long)pvVar6 + uVar13 * 8) = (float)local_98;
            *(uint *)((long)pvVar6 + uVar13 * 8 + 4) = (uint)(float)local_90 ^ _DAT_006524b0;
            uVar13 = uVar13 + 1;
          } while (uVar9 != uVar13);
        }
LAB_004e1484:
        puVar14 = (uint *)(param_9 + 0x60);
        uVar11 = 1;
        goto LAB_004e1490;
      }
    }
    pvVar6 = *(void **)(param_9 + 0x38);
  }
  if (pvVar6 != (void *)0x0) {
    freebytes(pvVar6);
    *(undefined8 *)(param_9 + 0x38) = 0;
  }
  if (*(void **)(param_9 + 0x40) != (void *)0x0) {
    freebytes(*(void **)(param_9 + 0x40));
    *(undefined8 *)(param_9 + 0x40) = 0;
  }
  uVar11 = 0;
  if (*(void **)(param_9 + 0x48) != (void *)0x0) {
    freebytes(*(void **)(param_9 + 0x48));
    *(undefined8 *)(param_9 + 0x48) = 0;
  }
LAB_004e1490:
  *puVar14 = 0;
  return uVar11;
}


