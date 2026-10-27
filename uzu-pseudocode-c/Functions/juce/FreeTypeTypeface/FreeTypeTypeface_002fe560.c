// Function : FreeTypeTypeface
// Namespace: juce:FreeTypeTypeface
// Entry    : 002fe560
// Prototype: undefined FreeTypeTypeface(FreeTypeTypeface * this, undefined4 param_1, long * param_2, long * param_3, long * param_4, long * param_5)
// Body     : 002fe560 - 002fefde


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::FreeTypeTypeface::FreeTypeTypeface(juce::FreeTypeTypeface::DoCache,
   juce::ReferenceCountedObjectPtr<juce::FTFaceWrapper>, juce::HbPtr<hb_font_t, &hb_font_reference,
   &hb_font_destroy>, juce::String const&, juce::String const&) */

void __thiscall
juce::FreeTypeTypeface::FreeTypeTypeface
          (FreeTypeTypeface *this,undefined4 param_1,long *param_2,long *param_3,long *param_4,
          long *param_5)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  short sVar6;
  short sVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  byte bVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  long *plVar16;
  undefined8 *puVar17;
  FTTypefaceList *pFVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  byte *pbVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  byte *pbVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  long *plVar32;
  undefined8 *puVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  byte *pbVar37;
  String *this_00;
  byte *pbVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  short sVar42;
  short sVar44;
  undefined1 auVar43 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__Typeface_00711980;
  lVar30 = *param_4;
  *(long *)(this + 0x10) = lVar30;
  piVar15 = (int *)(lVar30 + -0x10);
  if (piVar15 != &emptyString) {
    LOCK();
    *piVar15 = *piVar15 + 1;
    UNLOCK();
  }
  lVar30 = *param_5;
  *(long *)(this + 0x18) = lVar30;
  piVar15 = (int *)(lVar30 + -0x10);
  if (piVar15 != &emptyString) {
    LOCK();
    *piVar15 = *piVar15 + 1;
    UNLOCK();
  }
  *(undefined ***)this = &PTR__FreeTypeTypeface_007122a0;
  lVar30 = *param_2;
  *(long *)(this + 0x20) = lVar30;
  if (lVar30 != 0) {
    LOCK();
    *(int *)(lVar30 + 8) = *(int *)(lVar30 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(this + 0x28) = param_1;
  lVar30 = *param_3;
  *param_3 = 0;
  pvVar2 = (void *)*param_2;
  if (pvVar2 != (void *)0x0) {
    LOCK();
    *(int *)((long)pvVar2 + 8) = *(int *)((long)pvVar2 + 8) + 1;
    UNLOCK();
  }
  uVar12 = *(ushort *)(*(long *)((long)pvVar2 + 0x28) + 0x88);
  uVar1 = *(undefined4 *)(*(long *)((long)pvVar2 + 0x28) + 0x8a);
                    /* try { // try from 002fe603 to 002fe60c has its CatchHandler @ 002ff07e */
  plVar16 = operator_new(0xd0);
  sVar42 = (short)uVar1;
  sVar6 = -sVar42;
  sVar44 = (short)((uint)uVar1 >> 0x10);
  sVar7 = -sVar44;
  auVar40._0_4_ =
       (float)(ushort)((ushort)(sVar6 < sVar42) * sVar42 | (ushort)(sVar6 >= sVar42) * sVar6);
  auVar40._4_4_ =
       (float)(ushort)((ushort)(sVar7 < sVar44) * sVar44 | (ushort)(sVar7 >= sVar44) * sVar7);
  auVar40._8_8_ = 0;
  auVar43._0_4_ = (float)uVar12;
  auVar43._4_4_ = auVar43._0_4_;
  auVar43._8_8_ = 0;
  auVar40 = divps(auVar40,auVar43);
  *plVar16 = lVar30;
  plVar16[1] = auVar40._0_8_;
  local_48 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  puVar17 = *(undefined8 **)(*(long *)(lVar30 + 0x90) + 0x10);
  if (puVar17 == (undefined8 *)0x0) {
    uVar22 = 0;
  }
  else {
    uVar22 = *puVar17;
  }
                    /* try { // try from 002fe67a to 002fe683 has its CatchHandler @ 002ff083 */
  iVar13 = (**(code **)(*(long *)(lVar30 + 0x90) + 0x20))
                     (lVar30,*(undefined8 *)(lVar30 + 0x98),local_68,uVar22);
  if (iVar13 == 0) {
    lVar30 = plVar16[1];
  }
  else {
    uVar1 = local_68._0_4_;
    uVar10 = local_68._4_4_;
    lVar30 = *(long *)(*plVar16 + 0x20);
    uVar14 = *(uint *)(lVar30 + 0x14);
    if (uVar14 == 0) {
                    /* try { // try from 002fefa5 to 002fefa9 has its CatchHandler @ 002ff083 */
      puVar20 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                       *)(lVar30 + 0x70));
      uVar12 = *(ushort *)((long)puVar20 + 0x12) << 8 | *(ushort *)((long)puVar20 + 0x12) >> 8;
      uVar14 = 1000;
      if (uVar12 - 0x10 < 0x3ff1) {
        uVar14 = (uint)uVar12;
      }
      *(uint *)(lVar30 + 0x14) = uVar14;
    }
    auVar41._0_4_ = (float)uVar14;
    auVar39._0_4_ = (uint)(float)(int)uVar1 & _DAT_005d91c0;
    auVar39._4_4_ = (uint)(float)(int)uVar10 & _UNK_005d91c4;
    auVar39._8_8_ = 0;
    auVar41._4_4_ = auVar41._0_4_;
    auVar41._8_4_ = auVar41._0_4_;
    auVar41._12_4_ = auVar41._0_4_;
    auVar40 = divps(auVar39,auVar41);
    lVar30 = auVar40._0_8_;
  }
  plVar16[2] = lVar30;
  plVar16[3] = 0;
  *(undefined4 *)(plVar16 + 5) = 0;
  plVar16[6] = 0;
  plVar16[7] = (long)(plVar16 + 5);
  plVar16[8] = (long)(plVar16 + 5);
  plVar16[9] = 0;
  plVar16[0xb] = (long)(plVar16 + 10);
  plVar16[10] = (long)(plVar16 + 10);
  plVar16[0xc] = 0;
  *(undefined4 *)(plVar16 + 0xd) = 0;
                    /* try { // try from 002fe70d to 002fe716 has its CatchHandler @ 002ff072 */
  puVar17 = operator_new(0x28);
  puVar17[2] = 0;
  puVar17[3] = 0;
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[4] = 0;
  plVar16[0xe] = (long)puVar17;
  *(undefined4 *)(plVar16 + 0x10) = 0;
  plVar16[0x11] = 0;
  plVar16[0x12] = (long)(plVar16 + 0x10);
  plVar16[0x13] = (long)(plVar16 + 0x10);
  plVar16[0x14] = 0;
  plVar16[0x16] = (long)(plVar16 + 0x15);
  plVar16[0x15] = (long)(plVar16 + 0x15);
  plVar16[0x17] = 0;
  *(undefined4 *)(plVar16 + 0x18) = 0;
                    /* try { // try from 002fe792 to 002fe79b has its CatchHandler @ 002ff05e */
  puVar17 = operator_new(0x28);
  puVar17[2] = 0;
  puVar17[3] = 0;
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[4] = 0;
  plVar16[0x19] = (long)puVar17;
  *(long **)(this + 0x30) = plVar16;
  ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(pvVar2);
  if (*(int *)(this + 0x28) != 1) {
    return;
  }
  if (FTTypefaceList::singletonHolder == (FTTypefaceList *)0x0) {
                    /* try { // try from 002fe7d8 to 002fe7e1 has its CatchHandler @ 002fefec */
    pFVar18 = operator_new(0x28);
                    /* try { // try from 002fe7e2 to 002fe7ec has its CatchHandler @ 002fefdf */
    FTTypefaceList::FTTypefaceList(pFVar18);
    LOCK();
    UNLOCK();
    FTTypefaceList::singletonHolder = pFVar18;
  }
  pFVar18 = FTTypefaceList::singletonHolder;
  pvVar2 = *(void **)(this + 0x20);
  if (pvVar2 != (void *)0x0) {
    LOCK();
    *(int *)((long)pvVar2 + 8) = *(int *)((long)pvVar2 + 8) + 1;
    UNLOCK();
  }
  puVar17 = *(undefined8 **)(pFVar18 + 0x10);
                    /* try { // try from 002fe813 to 002fe821 has its CatchHandler @ 002ff046 */
  puVar19 = operator_new(0x28);
  if (pvVar2 != (void *)0x0) {
    LOCK();
    *(int *)((long)pvVar2 + 8) = *(int *)((long)pvVar2 + 8) + 1;
    UNLOCK();
  }
  *puVar19 = &PTR__KnownTypeface_00712340;
  pbVar28 = *(byte **)(*(long *)((long)pvVar2 + 0x28) + 0x28);
  pbVar38 = &DAT_0061ac58;
  pbVar37 = &DAT_0061ac58;
  if (pbVar28 != (byte *)0x0) {
    bVar11 = *pbVar28;
    pbVar37 = &DAT_0061ac58;
    if (bVar11 != 0) {
      lVar30 = 0;
      pbVar37 = pbVar28;
      do {
        pbVar37 = pbVar37 + 1;
        lVar29 = lVar30 + (ulong)(bVar11 >> 7);
        lVar30 = lVar29 + 1;
        bVar11 = *pbVar37;
      } while (bVar11 != 0);
      uVar31 = lVar29 + 5U & 0xfffffffffffffffc;
                    /* try { // try from 002fe894 to 002fe898 has its CatchHandler @ 002ff01d */
      puVar20 = operator_new__(uVar31 + 0x17);
      LOCK();
      *puVar20 = 0;
      UNLOCK();
      *(ulong *)(puVar20 + 2) = uVar31;
      pbVar37 = (byte *)(puVar20 + 4);
      bVar11 = *pbVar28;
      pbVar21 = pbVar37;
      if (bVar11 != 0) {
        do {
          pbVar28 = pbVar28 + 1;
          if ((char)bVar11 < '\0') {
            *pbVar21 = bVar11 >> 6 | 0xc0;
            pbVar21[1] = bVar11 & 0x3f | 0x80;
            pbVar21 = pbVar21 + 1;
          }
          else {
            *pbVar21 = bVar11;
          }
          pbVar21 = pbVar21 + 1;
          bVar11 = *pbVar28;
        } while (bVar11 != 0);
      }
      *pbVar21 = 0;
    }
  }
  this_00 = (String *)(puVar19 + 1);
  *(byte **)this_00 = pbVar37;
  pbVar28 = *(byte **)(*(long *)((long)pvVar2 + 0x28) + 0x30);
  if ((pbVar28 != (byte *)0x0) && (bVar11 = *pbVar28, bVar11 != 0)) {
    lVar30 = 0;
    pbVar37 = pbVar28;
    do {
      pbVar37 = pbVar37 + 1;
      lVar29 = lVar30 + (ulong)(bVar11 >> 7);
      lVar30 = lVar29 + 1;
      bVar11 = *pbVar37;
    } while (bVar11 != 0);
    uVar31 = lVar29 + 5U & 0xfffffffffffffffc;
                    /* try { // try from 002fe954 to 002fe958 has its CatchHandler @ 002feff1 */
    puVar20 = operator_new__(uVar31 + 0x17);
    LOCK();
    *puVar20 = 0;
    UNLOCK();
    *(ulong *)(puVar20 + 2) = uVar31;
    pbVar38 = (byte *)(puVar20 + 4);
    bVar11 = *pbVar28;
    pbVar37 = pbVar38;
    if (bVar11 != 0) {
      do {
        pbVar28 = pbVar28 + 1;
        if ((char)bVar11 < '\0') {
          *pbVar37 = bVar11 >> 6 | 0xc0;
          pbVar37[1] = bVar11 & 0x3f | 0x80;
          pbVar37 = pbVar37 + 1;
        }
        else {
          *pbVar37 = bVar11;
        }
        pbVar37 = pbVar37 + 1;
        bVar11 = *pbVar28;
      } while (bVar11 != 0);
    }
    *pbVar37 = 0;
  }
  puVar19[2] = pbVar38;
  lVar30 = *(long *)((long)pvVar2 + 0x28);
  *(undefined4 *)(puVar19 + 3) = *(undefined4 *)(lVar30 + 8);
  bVar11 = *(byte *)(lVar30 + 0x18);
  uVar14 = *(uint *)(lVar30 + 0x10);
  uVar22 = juce::String::containsIgnoreCase(this_00,(byte *)0x5e5178);
  if ((((char)uVar22 == '\0') &&
      (uVar22 = juce::String::containsIgnoreCase(this_00,(byte *)"Verdana"), (char)uVar22 == '\0'))
     && (uVar22 = juce::String::containsIgnoreCase(this_00,(byte *)"Arial"), (char)uVar22 == '\0'))
  {
    uVar22 = juce::String::containsIgnoreCase(this_00,&DAT_005e50ec);
    uVar25 = 0;
    if ((char)uVar22 != '\0') goto LAB_002fea45;
  }
  else {
LAB_002fea45:
    uVar25 = 8;
  }
  *(uint *)((long)puVar19 + 0x1c) =
       uVar14 & 4 | (uint)((byte)(bVar11 << 7 | (bVar11 & 3) << 5) >> 6) | uVar25;
  *puVar19 = &PTR__CachedTypeface_007122e8;
  puVar19[4] = pvVar2;
  LOCK();
  *(int *)((long)pvVar2 + 8) = *(int *)((long)pvVar2 + 8) + 1;
  UNLOCK();
  ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(pvVar2);
  puVar3 = *(undefined8 **)(pFVar18 + 0x10);
  puVar4 = *(undefined8 **)(pFVar18 + 0x18);
  lVar30 = (long)puVar17 - (long)puVar3 >> 3;
  if (puVar4 != *(undefined8 **)(pFVar18 + 0x20)) {
    if (puVar4 == puVar17) {
      *puVar17 = puVar19;
      *(long *)(pFVar18 + 0x18) = *(long *)(pFVar18 + 0x18) + 8;
    }
    else {
      plVar16 = puVar3 + lVar30;
      *puVar4 = puVar4[-1];
      puVar4[-1] = 0;
      lVar30 = *(long *)(pFVar18 + 0x18);
      *(long *)(pFVar18 + 0x18) = lVar30 + 8;
      plVar32 = (long *)(lVar30 + -8);
      if (0 < (long)plVar32 - (long)plVar16) {
        lVar30 = ((ulong)((long)plVar32 - (long)plVar16) >> 3) + 1;
        do {
          lVar29 = plVar32[-1];
          plVar5 = (long *)*plVar32;
          plVar32[-1] = 0;
          *plVar32 = lVar29;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 8))();
          }
          plVar32 = plVar32 + -1;
          lVar30 = lVar30 + -1;
        } while (1 < lVar30);
      }
      plVar32 = (long *)*plVar16;
      *plVar16 = (long)puVar19;
      if (plVar32 != (long *)0x0) {
        (**(code **)(*plVar32 + 8))();
      }
    }
    goto LAB_002fef82;
  }
  lVar29 = (long)puVar4 - (long)puVar3;
  if (lVar29 == 0x7ffffffffffffff8) {
                    /* try { // try from 002fefd3 to 002fefde has its CatchHandler @ 002ff036 */
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar26 = lVar29 >> 3;
  uVar31 = 1;
  if (lVar29 != 0) {
    uVar31 = uVar26;
  }
  uVar34 = uVar31 + uVar26;
  if (uVar34 >> 0x3c != 0) {
    uVar34 = 0xfffffffffffffff;
  }
  if (CARRY8(uVar31,uVar26)) {
    uVar34 = 0xfffffffffffffff;
  }
  if (uVar34 == 0) {
    puVar23 = (undefined8 *)0x0;
  }
  else {
                    /* try { // try from 002feb8b to 002feb8f has its CatchHandler @ 002ff036 */
    puVar23 = operator_new(uVar34 * 8);
  }
  puVar24 = puVar3 + lVar30;
  puVar23[lVar30] = puVar19;
  puVar19 = puVar23;
  if ((long)puVar17 - (long)puVar3 != 0) {
    uVar31 = (long)puVar24 + (-8 - (long)puVar3);
    puVar17 = puVar3;
    if (0x17 < uVar31) {
      uVar31 = (uVar31 >> 3) + 1;
      uVar35 = uVar31 & 0xfffffffffffffffc;
      uVar26 = (uVar35 - 4 >> 2) + 1;
      if (uVar35 - 4 == 0) {
        lVar30 = 0;
LAB_002fed4d:
        uVar9 = (puVar3 + lVar30)[1];
        uVar22 = puVar3[lVar30 + 2];
        uVar8 = (puVar3 + lVar30 + 2)[1];
        puVar23[lVar30] = puVar3[lVar30];
        (puVar23 + lVar30)[1] = uVar9;
        puVar23[lVar30 + 2] = uVar22;
        (puVar23 + lVar30 + 2)[1] = uVar8;
        puVar3[lVar30 + 2] = 0;
        (puVar3 + lVar30 + 2)[1] = 0;
        puVar3[lVar30] = 0;
        (puVar3 + lVar30)[1] = 0;
      }
      else {
        uVar27 = (uVar26 & 0x7ffffffffffffffe) - 2;
        uVar36 = (uVar27 >> 1) + 1;
        if (uVar27 == 0) {
          lVar30 = 0;
        }
        else {
          uVar27 = uVar36 & 0xfffffffffffffffe;
          lVar29 = 0;
          do {
            uVar22 = (puVar3 + lVar29)[1];
            uVar8 = puVar3[lVar29 + 2];
            uVar9 = (puVar3 + lVar29 + 2)[1];
            puVar23[lVar29] = puVar3[lVar29];
            (puVar23 + lVar29)[1] = uVar22;
            puVar23[lVar29 + 2] = uVar8;
            (puVar23 + lVar29 + 2)[1] = uVar9;
            puVar3[lVar29 + 2] = 0;
            (puVar3 + lVar29 + 2)[1] = 0;
            puVar3[lVar29] = 0;
            (puVar3 + lVar29)[1] = 0;
            uVar22 = (puVar3 + lVar29 + 4)[1];
            uVar8 = puVar3[lVar29 + 6];
            uVar9 = (puVar3 + lVar29 + 6)[1];
            puVar23[lVar29 + 4] = puVar3[lVar29 + 4];
            (puVar23 + lVar29 + 4)[1] = uVar22;
            puVar23[lVar29 + 6] = uVar8;
            (puVar23 + lVar29 + 6)[1] = uVar9;
            puVar3[lVar29 + 6] = 0;
            (puVar3 + lVar29 + 6)[1] = 0;
            puVar3[lVar29 + 4] = 0;
            (puVar3 + lVar29 + 4)[1] = 0;
            uVar22 = (puVar3 + lVar29 + 8)[1];
            uVar8 = puVar3[lVar29 + 10];
            uVar9 = (puVar3 + lVar29 + 10)[1];
            puVar23[lVar29 + 8] = puVar3[lVar29 + 8];
            (puVar23 + lVar29 + 8)[1] = uVar22;
            puVar23[lVar29 + 10] = uVar8;
            (puVar23 + lVar29 + 10)[1] = uVar9;
            puVar3[lVar29 + 10] = 0;
            (puVar3 + lVar29 + 10)[1] = 0;
            puVar3[lVar29 + 8] = 0;
            (puVar3 + lVar29 + 8)[1] = 0;
            uVar22 = (puVar3 + lVar29 + 0xc)[1];
            auVar40 = *(undefined1 (*) [16])(puVar3 + lVar29 + 0xe);
            puVar23[lVar29 + 0xc] = puVar3[lVar29 + 0xc];
            (puVar23 + lVar29 + 0xc)[1] = uVar22;
            *(undefined1 (*) [16])(puVar23 + lVar29 + 0xe) = auVar40;
            lVar30 = lVar29 + 0x10;
            puVar3[lVar29 + 0xe] = 0;
            (puVar3 + lVar29 + 0xe)[1] = 0;
            puVar3[lVar29 + 0xc] = 0;
            (puVar3 + lVar29 + 0xc)[1] = 0;
            uVar27 = uVar27 - 2;
            lVar29 = lVar30;
          } while (uVar27 != 0);
        }
        if ((uVar36 & 1) != 0) {
          uVar22 = (puVar3 + lVar30)[1];
          uVar8 = puVar3[lVar30 + 2];
          uVar9 = (puVar3 + lVar30 + 2)[1];
          puVar23[lVar30] = puVar3[lVar30];
          (puVar23 + lVar30)[1] = uVar22;
          puVar23[lVar30 + 2] = uVar8;
          (puVar23 + lVar30 + 2)[1] = uVar9;
          uVar27 = lVar30 * 8 | 0x20;
          puVar3[lVar30 + 2] = 0;
          (puVar3 + lVar30 + 2)[1] = 0;
          puVar3[lVar30] = 0;
          (puVar3 + lVar30)[1] = 0;
          uVar22 = ((undefined8 *)((long)puVar3 + uVar27))[1];
          auVar40 = *(undefined1 (*) [16])((long)puVar3 + uVar27 + 0x10);
          *(undefined8 *)((long)puVar23 + uVar27) = *(undefined8 *)((long)puVar3 + uVar27);
          ((undefined8 *)((long)puVar23 + uVar27))[1] = uVar22;
          *(undefined1 (*) [16])((long)puVar23 + uVar27 + 0x10) = auVar40;
          lVar30 = lVar30 + 8;
          puVar17 = (undefined8 *)((long)puVar3 + uVar27 + 0x10);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)((long)puVar3 + uVar27) = 0;
          ((undefined8 *)((long)puVar3 + uVar27))[1] = 0;
        }
        if ((uVar26 & 1) != 0) goto LAB_002fed4d;
      }
      puVar19 = puVar23 + uVar35;
      if (uVar31 == uVar35) goto LAB_002fed9a;
      puVar19 = puVar23 + uVar35;
      puVar17 = puVar3 + uVar35;
    }
    do {
      *puVar19 = *puVar17;
      *puVar17 = 0;
      puVar17 = puVar17 + 1;
      puVar19 = puVar19 + 1;
    } while (puVar17 != puVar24);
  }
LAB_002fed9a:
  puVar17 = puVar19 + 1;
  puVar33 = puVar17;
  if ((long)puVar4 - (long)puVar24 != 0) {
    uVar31 = ((long)puVar4 - (long)puVar24) - 8;
    if (0x17 < uVar31) {
      uVar35 = (uVar31 >> 3) + 1;
      uVar31 = uVar35 & 0xfffffffffffffffc;
      uVar26 = (uVar31 - 4 >> 2) + 1;
      if (uVar31 - 4 == 0) {
        lVar30 = 0;
LAB_002fef11:
        uVar22 = (puVar24 + lVar30)[1];
        uVar8 = puVar24[lVar30 + 2];
        uVar9 = (puVar24 + lVar30 + 2)[1];
        puVar17[lVar30] = puVar24[lVar30];
        (puVar17 + lVar30)[1] = uVar22;
        puVar19[lVar30 + 3] = uVar8;
        (puVar19 + lVar30 + 3)[1] = uVar9;
        puVar24[lVar30 + 2] = 0;
        (puVar24 + lVar30 + 2)[1] = 0;
        puVar24[lVar30] = 0;
        (puVar24 + lVar30)[1] = 0;
      }
      else {
        uVar27 = (uVar26 & 0x7ffffffffffffffe) - 2;
        uVar36 = (uVar27 >> 1) + 1;
        if (uVar27 == 0) {
          lVar30 = 0;
        }
        else {
          uVar27 = uVar36 & 0xfffffffffffffffe;
          lVar29 = 0;
          do {
            uVar22 = (puVar24 + lVar29)[1];
            uVar8 = puVar24[lVar29 + 2];
            uVar9 = (puVar24 + lVar29 + 2)[1];
            puVar19[lVar29 + 1] = puVar24[lVar29];
            (puVar19 + lVar29 + 1)[1] = uVar22;
            puVar19[lVar29 + 3] = uVar8;
            (puVar19 + lVar29 + 3)[1] = uVar9;
            puVar24[lVar29 + 2] = 0;
            (puVar24 + lVar29 + 2)[1] = 0;
            puVar24[lVar29] = 0;
            (puVar24 + lVar29)[1] = 0;
            uVar22 = (puVar24 + lVar29 + 4)[1];
            uVar8 = puVar24[lVar29 + 6];
            uVar9 = (puVar24 + lVar29 + 6)[1];
            puVar19[lVar29 + 5] = puVar24[lVar29 + 4];
            (puVar19 + lVar29 + 5)[1] = uVar22;
            puVar19[lVar29 + 7] = uVar8;
            (puVar19 + lVar29 + 7)[1] = uVar9;
            puVar24[lVar29 + 6] = 0;
            (puVar24 + lVar29 + 6)[1] = 0;
            puVar24[lVar29 + 4] = 0;
            (puVar24 + lVar29 + 4)[1] = 0;
            uVar22 = (puVar24 + lVar29 + 8)[1];
            uVar8 = puVar24[lVar29 + 10];
            uVar9 = (puVar24 + lVar29 + 10)[1];
            puVar19[lVar29 + 9] = puVar24[lVar29 + 8];
            (puVar19 + lVar29 + 9)[1] = uVar22;
            puVar19[lVar29 + 0xb] = uVar8;
            (puVar19 + lVar29 + 0xb)[1] = uVar9;
            puVar24[lVar29 + 10] = 0;
            (puVar24 + lVar29 + 10)[1] = 0;
            puVar24[lVar29 + 8] = 0;
            (puVar24 + lVar29 + 8)[1] = 0;
            uVar22 = (puVar24 + lVar29 + 0xc)[1];
            uVar8 = puVar24[lVar29 + 0xe];
            uVar9 = (puVar24 + lVar29 + 0xe)[1];
            puVar19[lVar29 + 0xd] = puVar24[lVar29 + 0xc];
            (puVar19 + lVar29 + 0xd)[1] = uVar22;
            puVar19[lVar29 + 0xf] = uVar8;
            (puVar19 + lVar29 + 0xf)[1] = uVar9;
            lVar30 = lVar29 + 0x10;
            puVar24[lVar29 + 0xe] = 0;
            (puVar24 + lVar29 + 0xe)[1] = 0;
            puVar24[lVar29 + 0xc] = 0;
            (puVar24 + lVar29 + 0xc)[1] = 0;
            uVar27 = uVar27 - 2;
            lVar29 = lVar30;
          } while (uVar27 != 0);
        }
        if ((uVar36 & 1) != 0) {
          uVar22 = (puVar24 + lVar30)[1];
          uVar8 = puVar24[lVar30 + 2];
          uVar9 = (puVar24 + lVar30 + 2)[1];
          puVar17[lVar30] = puVar24[lVar30];
          (puVar17 + lVar30)[1] = uVar22;
          puVar19[lVar30 + 3] = uVar8;
          (puVar19 + lVar30 + 3)[1] = uVar9;
          uVar27 = lVar30 * 8 | 0x20;
          puVar24[lVar30 + 2] = 0;
          (puVar24 + lVar30 + 2)[1] = 0;
          puVar24[lVar30] = 0;
          (puVar24 + lVar30)[1] = 0;
          uVar22 = ((undefined8 *)((long)puVar24 + uVar27))[1];
          puVar33 = (undefined8 *)((long)puVar24 + uVar27 + 0x10);
          uVar8 = *puVar33;
          uVar9 = puVar33[1];
          *(undefined8 *)((long)puVar17 + uVar27) = *(undefined8 *)((long)puVar24 + uVar27);
          ((undefined8 *)((long)puVar17 + uVar27))[1] = uVar22;
          puVar33 = (undefined8 *)((long)puVar19 + uVar27 + 0x18);
          *puVar33 = uVar8;
          puVar33[1] = uVar9;
          lVar30 = lVar30 + 8;
          puVar33 = (undefined8 *)((long)puVar24 + uVar27 + 0x10);
          *puVar33 = 0;
          puVar33[1] = 0;
          *(undefined8 *)((long)puVar24 + uVar27) = 0;
          ((undefined8 *)((long)puVar24 + uVar27))[1] = 0;
        }
        if ((uVar26 & 1) != 0) goto LAB_002fef11;
      }
      puVar33 = puVar17 + uVar31;
      if (uVar35 == uVar31) goto LAB_002fef5b;
      puVar33 = puVar17 + uVar31;
      puVar24 = puVar24 + uVar31;
    }
    do {
      *puVar33 = *puVar24;
      *puVar24 = 0;
      puVar24 = puVar24 + 1;
      puVar33 = puVar33 + 1;
    } while (puVar24 != puVar4);
  }
LAB_002fef5b:
  if (puVar3 != (undefined8 *)0x0) {
    operator_delete(puVar3);
  }
  *(undefined8 **)(pFVar18 + 0x10) = puVar23;
  *(undefined8 **)(pFVar18 + 0x18) = puVar33;
  *(undefined8 **)(pFVar18 + 0x20) = puVar23 + uVar34;
LAB_002fef82:
  ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(pvVar2);
  return;
}


