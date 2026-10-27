// Function : decodeImage
// Namespace: juce:PNGImageFormat
// Entry    : 00393070
// Prototype: long * decodeImage(long * param_1, undefined8 param_2, undefined8 param_3)
// Body     : 00393070 - 0039370c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::PNGImageFormat::decodeImage(juce::InputStream&) */

long * __cdecl
juce::PNGImageFormat::decodeImage(long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long *plVar6;
  bool bVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  undefined7 extraout_var;
  pnglibNamespace *__dest;
  uint *puVar11;
  void *__ptr;
  undefined8 *__ptr_00;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  void *pvVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  NamedValueSet *this;
  uint uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  byte bVar23;
  size_t __size;
  int *piVar24;
  ulong uVar25;
  long lVar26;
  bool bVar27;
  uint local_484;
  uint local_480;
  uint local_47c;
  long *local_478;
  ulong local_470;
  long local_468;
  uint local_460 [2];
  pnglibNamespace *local_458;
  undefined1 *local_450;
  undefined1 local_448 [12];
  int local_43c;
  int local_438;
  undefined4 local_434;
  undefined4 local_430;
  long *local_428;
  uint *local_420;
  __jmp_buf_tag local_418 [3];
  undefined8 local_fc;
  
  memset(local_418[0].__jmpbuf + 3,0,0x3d0);
  local_fc = 0xf4240000f4240;
  local_418[0].__jmpbuf[0] = 0;
  local_418[0].__jmpbuf[1] = 0;
  local_418[0].__jmpbuf[2] = 0;
  bVar9 = pnglibNamespace::png_user_version_check((long)local_418);
  if ((int)CONCAT71(extraout_var,bVar9) == 0) {
LAB_00393272:
    *param_1 = 0;
    return param_1;
  }
  __dest = malloc(1000);
  if (__dest == (pnglibNamespace *)0x0) {
    pnglibNamespace::png_warning((long)local_418,"Out of memory");
    goto LAB_00393272;
  }
  local_418[0].__saved_mask.__val[0xb] = (ulong)pnglibNamespace::png_zalloc;
  local_418[0].__saved_mask.__val[0xc] = (ulong)pnglibNamespace::png_zfree;
  local_418[0].__saved_mask.__val[0xd] = (ulong)__dest;
  memcpy(__dest,local_418,1000);
  *(undefined4 *)(__dest + 0x4c) = 0x8000;
  *(undefined4 *)(__dest + 0x368) = 0x2000;
  __dest[0x52] = (pnglibNamespace)((byte)__dest[0x52] | 0x30);
  *(undefined8 *)(__dest + 0x28) = 0;
  *(code **)(__dest + 0x20) = pnglibNamespace::png_default_read_data;
  if (*(long *)(__dest + 0x18) != 0) {
    *(undefined8 *)(__dest + 0x18) = 0;
    pnglibNamespace::png_warning
              ((long)__dest,"Can\'t set both read_data_fn and write_data_fn in the same structure");
  }
  *(undefined8 *)(__dest + 0x1b0) = 0;
  local_458 = __dest;
  puVar11 = calloc(1,0x158);
  local_420 = puVar11;
  if (puVar11 == (uint *)0x0) {
    pnglibNamespace::png_destroy_read_struct(&local_458,(undefined8 *)0x0);
    goto LAB_00393272;
  }
  *(__jmp_buf_tag **)(__dest + 0x10) = local_418;
  *(code **)__dest = PNGHelpers::errorCallback;
  *(code **)(__dest + 8) = PNGHelpers::warningCallback;
  local_47c = 0;
  local_480 = 0;
  local_460[1] = 0;
  local_484 = 0;
  local_460[0] = 0;
  bVar9 = PNGHelpers::readHeader
                    (param_3,__dest,puVar11,local_418,&local_47c,&local_480,local_460 + 1,&local_484
                     ,local_460);
  uVar8 = local_47c;
  uVar20 = local_480;
  if (bVar9) {
    uVar25 = (ulong)(local_47c * 4);
    uVar14 = (ulong)local_480;
    if (uVar14 * uVar25 == 0) {
      __ptr = (void *)0x0;
    }
    else {
      __ptr = malloc(uVar14 * uVar25);
    }
    local_470 = 0;
    if (uVar20 == 0) {
      __ptr_00 = (undefined8 *)0x0;
    }
    else {
      __ptr_00 = malloc(uVar14 * 8);
      if (uVar14 - 1 < 3) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        pvVar16 = __ptr;
        do {
          __ptr_00[uVar15] = pvVar16;
          __ptr_00[uVar15 + 1] = (long)pvVar16 + uVar25;
          __ptr_00[uVar15 + 2] = (void *)((long)pvVar16 + uVar25 * 2);
          __ptr_00[uVar15 + 3] = (void *)((long)pvVar16 + uVar25 * 3);
          uVar15 = uVar15 + 4;
          pvVar16 = (void *)((long)pvVar16 + uVar25 * 4);
        } while ((uVar20 & 0xfffffffc) != uVar15);
      }
      if ((ulong)(uVar20 & 3) != 0) {
        pvVar16 = (void *)(uVar15 * uVar25 + (long)__ptr);
        uVar18 = 0;
        do {
          __ptr_00[uVar15 + uVar18] = pvVar16;
          uVar18 = uVar18 + 1;
          pvVar16 = (void *)((long)pvVar16 + uVar25);
        } while ((uVar20 & 3) != uVar18);
      }
    }
    if ((puVar11[2] & 0x10) != 0) {
      local_470 = (ulong)*(ushort *)((long)puVar11 + 0x22);
    }
    bVar9 = PNGHelpers::readImageData(__dest,puVar11,local_418,__ptr_00);
    if (bVar9) {
      bVar9 = (local_484 & 4) != 0;
      bVar7 = (int)local_470 != 0;
      bVar27 = bVar9 || bVar7;
                    /* try { // try from 00393392 to 0039339b has its CatchHandler @ 0039378d */
      puVar12 = operator_new(0x60);
      *(undefined4 *)(puVar12 + 1) = 0;
      *(uint *)((long)puVar12 + 0xc) = bVar27 + 1;
      *(uint *)(puVar12 + 2) = uVar8;
      *(uint *)((long)puVar12 + 0x14) = uVar20;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[8] = 0;
      *(undefined4 *)(puVar12 + 9) = 0;
      *puVar12 = &PTR__SoftwarePixelData_00711df0;
      iVar10 = bVar27 + 3;
      *(int *)(puVar12 + 0xb) = iVar10;
      uVar13 = 1;
      if (0 < (int)uVar8) {
        uVar13 = uVar8;
      }
      uVar13 = uVar13 * iVar10 + 3 & 0x7ffffffc;
      *(uint *)((long)puVar12 + 0x5c) = uVar13;
      uVar25 = 1;
      if (0 < (int)uVar20) {
        uVar25 = uVar14;
      }
      __size = uVar25 * uVar13;
      if (bVar9 || bVar7) {
        if (__size == 0) {
LAB_0039344b:
          pvVar16 = (void *)0x0;
        }
        else {
          pvVar16 = calloc(__size,1);
        }
      }
      else {
        if (__size == 0) goto LAB_0039344b;
        pvVar16 = malloc(__size);
      }
      puVar12[10] = pvVar16;
      *param_1 = (long)puVar12;
      LOCK();
      *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
      UNLOCK();
      plVar6 = (long *)*param_1;
      this = (NamedValueSet *)(plVar6 + 3);
      if (plVar6 == (long *)0x0) {
        this = (NamedValueSet *)0x0;
      }
                    /* try { // try from 00393467 to 0039347c has its CatchHandler @ 00393769 */
      local_478 = plVar6;
      Identifier::Identifier((Identifier *)&local_468,(byte *)"originalImageHadAlpha");
      if (plVar6 == (long *)0x0) {
        local_448[0] = true;
      }
      else {
        local_448[0] = *(int *)((long)plVar6 + 0xc) != 1;
      }
      local_450 = &var::Instance::attributesBool;
                    /* try { // try from 003934a2 to 003934b3 has its CatchHandler @ 0039372a */
      NamedValueSet::set(this,&local_468,(long *)&local_450);
                    /* try { // try from 003934b9 to 003934be has its CatchHandler @ 00393722 */
      (**(code **)(local_450 + 0x58))(local_448);
      piVar24 = (int *)(local_468 + -0x10);
      if (piVar24 != &emptyString) {
        LOCK();
        iVar10 = *piVar24;
        *piVar24 = *piVar24 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          operator_delete__(piVar24);
        }
      }
      if (plVar6 == (long *)0x0) {
        bVar9 = true;
        local_434 = 0;
        local_430 = 0;
      }
      else {
        bVar9 = *(int *)((long)plVar6 + 0xc) != 1;
        local_434 = (undefined4)plVar6[2];
        local_430 = *(undefined4 *)((long)plVar6 + 0x14);
      }
      local_428 = (long *)0x0;
                    /* try { // try from 00393515 to 00393529 has its CatchHandler @ 0039370d */
      (**(code **)(*plVar6 + 0x38))(plVar6,&local_450,0,0);
      if (0 < (int)uVar20) {
        if (bVar9) {
          if (0 < (int)uVar8) {
            uVar25 = 0;
            do {
              pbVar19 = local_450 + (long)local_43c * uVar25;
              pbVar17 = (byte *)(__ptr_00[uVar25] + 3);
              iVar10 = uVar8 + 1;
              do {
                bVar23 = *pbVar17;
                bVar1 = pbVar17[-3];
                bVar2 = pbVar17[-2];
                bVar3 = pbVar17[-1];
                *pbVar19 = bVar3;
                pbVar19[1] = bVar2;
                pbVar19[2] = bVar1;
                pbVar19[3] = bVar23;
                uVar20 = (uint)bVar23;
                if (uVar20 != 0xff) {
                  if (bVar23 == 0) {
                    pbVar19[0] = 0;
                    pbVar19[1] = 0;
                    bVar23 = 0;
                  }
                  else {
                    *pbVar19 = (byte)(bVar3 * uVar20 + 0x7f >> 8);
                    pbVar19[1] = (byte)(bVar2 * uVar20 + 0x7f >> 8);
                    bVar23 = (byte)(bVar1 * uVar20 + 0x7f >> 8);
                  }
                  pbVar19[2] = bVar23;
                }
                pbVar19 = pbVar19 + local_438;
                iVar10 = iVar10 + -1;
                pbVar17 = pbVar17 + 4;
              } while (1 < iVar10);
              uVar25 = uVar25 + 1;
            } while (uVar25 != uVar14);
          }
        }
        else if (0 < (int)uVar8) {
          lVar26 = (long)local_438;
          local_470 = CONCAT44(local_470._4_4_,uVar8 - 1);
          uVar25 = 0;
          do {
            puVar21 = local_450 + uVar25 * (long)local_43c;
            puVar22 = (undefined1 *)__ptr_00[uVar25];
            uVar20 = uVar8;
            if ((uVar8 & 1) != 0) {
              uVar4 = puVar22[1];
              uVar5 = puVar22[2];
              puVar21[2] = *puVar22;
              puVar21[1] = uVar4;
              *puVar21 = uVar5;
              puVar21 = puVar21 + lVar26;
              puVar22 = puVar22 + 4;
              uVar20 = uVar8 - 1;
            }
            if (uVar8 != 1) {
              iVar10 = uVar20 + 2;
              puVar21 = puVar21 + 2;
              do {
                uVar4 = puVar22[1];
                uVar5 = puVar22[2];
                *puVar21 = *puVar22;
                puVar21[-1] = uVar4;
                puVar21[-2] = uVar5;
                uVar4 = puVar22[5];
                uVar5 = puVar22[6];
                puVar21[lVar26] = puVar22[4];
                puVar21[lVar26 + -1] = uVar4;
                puVar21[lVar26 + -2] = uVar5;
                iVar10 = iVar10 + -2;
                puVar21 = puVar21 + lVar26 * 2;
                puVar22 = puVar22 + 8;
              } while (2 < iVar10);
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 != uVar14);
        }
      }
      if (local_428 != (long *)0x0) {
        (**(code **)(*local_428 + 8))();
      }
      free(__ptr_00);
      free(__ptr);
      goto LAB_003936e9;
    }
    free(__ptr_00);
    free(__ptr);
  }
  *param_1 = 0;
LAB_003936e9:
                    /* try { // try from 003936e9 to 003936f7 has its CatchHandler @ 003937a3 */
  pnglibNamespace::png_destroy_read_struct(&local_458,&local_420);
  return param_1;
}


