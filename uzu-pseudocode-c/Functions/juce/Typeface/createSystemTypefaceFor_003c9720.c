// Function : createSystemTypefaceFor
// Namespace: juce:Typeface
// Entry    : 003c9720
// Prototype: Typeface * createSystemTypefaceFor(Typeface * this, void * param_1, size_t param_2)
// Body     : 003c9720 - 003c9b1d


/* juce::Typeface::createSystemTypefaceFor(void const*, unsigned long) */

Typeface * __thiscall
juce::Typeface::createSystemTypefaceFor(Typeface *this,void *param_1,size_t param_2)

{
  int iVar1;
  void *__dest;
  FTTypefaceList *this_00;
  undefined8 *puVar2;
  int *piVar3;
  hb_font_t *phVar4;
  FreeTypeTypeface *this_01;
  byte *pbVar5;
  undefined4 *puVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 *local_58;
  FreeTypeTypeface *local_50;
  byte *local_48;
  hb_font_t *local_40;
  byte *local_38;
  
  this_00 = FTTypefaceList::singletonHolder;
  if (FTTypefaceList::singletonHolder == (FTTypefaceList *)0x0) {
    this_00 = operator_new(0x28);
                    /* try { // try from 003c977e to 003c9785 has its CatchHandler @ 003c9bfc */
    FTTypefaceList::FTTypefaceList(this_00);
    LOCK();
    UNLOCK();
  }
  FTTypefaceList::singletonHolder = this_00;
  if (param_2 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = malloc(param_2);
    if (__dest == (void *)0x0) {
      puVar2 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar2 = PTR_vtable_00715738 + 0x10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
    }
    if (param_1 != (void *)0x0) {
      memcpy(__dest,param_1,param_2);
    }
  }
  local_58 = (undefined8 *)0x0;
                    /* try { // try from 003c97a7 to 003c97db has its CatchHandler @ 003c9c1e */
  iVar1 = FT_New_Memory_Face(*(undefined8 *)(*(long *)(this_00 + 8) + 0x18),__dest,param_2,0,
                             &local_58);
  if (iVar1 == 0) {
    puVar2 = operator_new(0x30);
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = &PTR__FTFaceWrapper_007123a8;
    lVar9 = *(long *)(this_00 + 8);
    puVar2[2] = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = __dest;
    puVar2[4] = param_2;
    puVar2[5] = local_58;
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
                    /* try { // try from 003c9825 to 003c9843 has its CatchHandler @ 003c9c0f */
    iVar1 = FT_Select_Charmap(puVar2[5],0x756e6963);
    if (iVar1 != 0) {
      FT_Set_Charmap(puVar2[5],**(undefined8 **)(puVar2[5] + 0x50));
    }
                    /* try { // try from 003c9849 to 003c984d has its CatchHandler @ 003c9be9 */
    piVar3 = hb_ft_face_create_referenced(puVar2[5]);
                    /* try { // try from 003c9851 to 003c9858 has its CatchHandler @ 003c9bcf */
    phVar4 = hb_font_create(piVar3);
    if (phVar4 == (hb_font_t *)0x0) {
      *(undefined8 *)this = 0;
    }
    else {
                    /* try { // try from 003c9865 to 003c986e has its CatchHandler @ 003c9bba */
      this_01 = operator_new(0x38);
      LOCK();
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      UNLOCK();
      lVar9 = puVar2[5];
      pbVar11 = *(byte **)(lVar9 + 0x28);
      local_38 = &DAT_0061ac58;
      local_58 = puVar2;
      local_40 = phVar4;
      if (pbVar11 == (byte *)0x0) {
        local_48 = &DAT_0061ac58;
        pbVar11 = *(byte **)(lVar9 + 0x30);
      }
      else {
        bVar7 = *pbVar11;
        local_48 = &DAT_0061ac58;
        if (bVar7 != 0) {
          lVar9 = 0;
          pbVar5 = pbVar11;
          do {
            pbVar5 = pbVar5 + 1;
            lVar8 = lVar9 + (ulong)(bVar7 >> 7);
            lVar9 = lVar8 + 1;
            bVar7 = *pbVar5;
          } while (bVar7 != 0);
          uVar10 = lVar8 + 5U & 0xfffffffffffffffc;
          local_50 = this_01;
                    /* try { // try from 003c98e4 to 003c98e8 has its CatchHandler @ 003c9b23 */
          puVar6 = operator_new__(uVar10 + 0x17);
          LOCK();
          *puVar6 = 0;
          UNLOCK();
          *(ulong *)(puVar6 + 2) = uVar10;
          local_48 = (byte *)(puVar6 + 4);
          bVar7 = *pbVar11;
          pbVar5 = local_48;
          if (bVar7 != 0) {
            do {
              pbVar11 = pbVar11 + 1;
              if ((char)bVar7 < '\0') {
                *pbVar5 = bVar7 >> 6 | 0xc0;
                pbVar5[1] = bVar7 & 0x3f | 0x80;
                pbVar5 = pbVar5 + 1;
              }
              else {
                *pbVar5 = bVar7;
              }
              pbVar5 = pbVar5 + 1;
              bVar7 = *pbVar11;
            } while (bVar7 != 0);
          }
          *pbVar5 = 0;
          lVar9 = puVar2[5];
          this_01 = local_50;
        }
        pbVar11 = *(byte **)(lVar9 + 0x30);
      }
      if (pbVar11 != (byte *)0x0) {
        bVar7 = *pbVar11;
        if (bVar7 != 0) {
          lVar9 = 0;
          pbVar5 = pbVar11;
          do {
            pbVar5 = pbVar5 + 1;
            lVar8 = lVar9 + (ulong)(bVar7 >> 7);
            lVar9 = lVar8 + 1;
            bVar7 = *pbVar5;
          } while (bVar7 != 0);
          uVar10 = lVar8 + 5U & 0xfffffffffffffffc;
          local_50 = this_01;
                    /* try { // try from 003c99c4 to 003c99c8 has its CatchHandler @ 003c9b1e */
          puVar6 = operator_new__(uVar10 + 0x17);
          LOCK();
          *puVar6 = 0;
          UNLOCK();
          *(ulong *)(puVar6 + 2) = uVar10;
          local_38 = (byte *)(puVar6 + 4);
          bVar7 = *pbVar11;
          pbVar5 = local_38;
          if (bVar7 != 0) {
            do {
              pbVar11 = pbVar11 + 1;
              if ((char)bVar7 < '\0') {
                *pbVar5 = bVar7 >> 6 | 0xc0;
                pbVar5[1] = bVar7 & 0x3f | 0x80;
                pbVar5 = pbVar5 + 1;
              }
              else {
                *pbVar5 = bVar7;
              }
              pbVar5 = pbVar5 + 1;
              bVar7 = *pbVar11;
            } while (bVar7 != 0);
          }
          *pbVar5 = 0;
          this_01 = local_50;
        }
      }
                    /* try { // try from 003c9a37 to 003c9a55 has its CatchHandler @ 003c9b38 */
      FreeTypeTypeface::FreeTypeTypeface
                (this_01,1,(long *)&local_58,(long *)&local_40,(long *)&local_48,(long *)&local_38);
      *(FreeTypeTypeface **)this = this_01;
      LOCK();
      *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
      UNLOCK();
      pbVar11 = local_38 + -0x10;
      if (pbVar11 != (byte *)&emptyString) {
        LOCK();
        iVar1 = *(int *)pbVar11;
        *(int *)pbVar11 = *(int *)pbVar11 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(pbVar11);
        }
      }
      pbVar11 = local_48 + -0x10;
      if (pbVar11 != (byte *)&emptyString) {
        LOCK();
        iVar1 = *(int *)pbVar11;
        *(int *)pbVar11 = *(int *)pbVar11 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(pbVar11);
        }
      }
      if (local_40 != (hb_font_t *)0x0) {
                    /* try { // try from 003c9aaa to 003c9aae has its CatchHandler @ 003c9b28 */
        hb_font_destroy((int *)local_40);
      }
      ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(local_58);
    }
    if (piVar3 != (int *)0x0) {
                    /* try { // try from 003c9abd to 003c9ac4 has its CatchHandler @ 003c9b30 */
      hb_face_destroy(piVar3);
    }
  }
  else {
    free(__dest);
    *(undefined8 *)this = 0;
    puVar2 = (undefined8 *)0x0;
  }
  ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(puVar2);
  return this;
}


