// Function : set
// Namespace: juce:TextEditor:TextEditorStorage
// Entry    : 002439d0
// Prototype: undefined set(Ranges * param_1, ulong param_2, ulong param_3, String * param_4, long * param_5, undefined4 * param_6)
// Body     : 002439d0 - 00243d62


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TextEditor::TextEditorStorage::set(juce::Range<long long>, juce::String const&, juce::Font
   const&, juce::Colour const&) */

void __cdecl
juce::TextEditor::TextEditorStorage::set
          (Ranges *param_1,ulong param_2,ulong param_3,String *param_4,long *param_5,
          undefined4 *param_6)

{
  byte *pbVar1;
  long *plVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  RangedValues<juce::Colour> *this;
  int iVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *local_78;
  long *plStack_70;
  undefined8 local_68;
  long *local_58;
  ulong local_50;
  long *local_48;
  RangedValues<juce::Colour> *local_40;
  undefined4 *local_38;
  
  local_58 = param_5;
  local_38 = param_6;
  ParagraphsModel::set((undefined8 *)(param_1 + 0x60),param_2,param_3,param_4);
  local_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  local_68 = 0;
                    /* try { // try from 00243a0d to 00243a31 has its CatchHandler @ 00243d6c */
  detail::Ranges::erase(param_1,param_2,param_3,&local_78);
  detail::Ranges::shift(param_1,param_3,param_2 - param_3,&local_78);
  if ((long)plStack_70 - (long)local_78 != 0) {
    uVar8 = SUB168(SEXT816((long)plStack_70 - (long)local_78) * SEXT816(0x2aaaaaaaaaaaaaab),8);
    lVar11 = ((uVar8 >> 3) - ((long)uVar8 >> 0x3f)) * 0x30;
    plVar13 = local_78;
    do {
                    /* try { // try from 00243a70 to 00243a7a has its CatchHandler @ 00243da2 */
      detail::RangedValues<juce::Font>::applyOperation((RangedValues<juce::Font> *)param_1,plVar13);
      plVar13 = plVar13 + 6;
      lVar11 = lVar11 + -0x30;
    } while (lVar11 != 0);
  }
                    /* try { // try from 00243a85 to 00243aa9 has its CatchHandler @ 00243d6c */
  detail::RangedValues<juce::Font>::mergeEqualItems
            ((RangedValues<juce::Font> *)param_1,param_2,(long *)&local_78);
  local_40 = (RangedValues<juce::Colour> *)(param_1 + 0x30);
  detail::RangedValues<juce::Colour>::drop<juce::detail::MergeEqualItemsYes>
            (local_40,param_2,param_3,(long *)&local_78);
  plStack_70 = local_78;
  pcVar9 = *(char **)param_4;
  iVar6 = 0;
  do {
    cVar3 = *pcVar9;
    if (cVar3 < '\0') {
      do {
        pbVar1 = (byte *)(pcVar9 + 1);
        pcVar9 = pcVar9 + 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
    }
    else {
      pcVar9 = pcVar9 + 1;
      if (cVar3 == '\0') {
        uVar8 = (long)iVar6 + param_2;
        if ((long)((long)iVar6 + param_2) <= (long)param_2) {
          uVar8 = param_2;
        }
        plVar13 = (long *)*local_58;
        if (plVar13 != (long *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
        local_50 = param_2;
                    /* try { // try from 00243b35 to 00243b47 has its CatchHandler @ 00243d63 */
        detail::Ranges::insert(param_1,param_2,uVar8,&local_78);
        uVar5 = local_50;
        local_58 = (long *)uVar8;
        if (((long)plStack_70 - (long)local_78 != 0) &&
           (lVar11 = ((long)plStack_70 - (long)local_78) / 0x30, lVar11 != 0)) {
          lVar11 = lVar11 * 0x30;
          plVar12 = local_78;
          do {
            if (plVar13 != (long *)0x0) {
              LOCK();
              *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
              UNLOCK();
            }
            local_48 = plVar13;
            if ((char)plVar12[5] == '\0') {
              std::vector<juce::Font,std::allocator<juce::Font>>::_M_insert_rval
                        ((vector<juce::Font,std::allocator<juce::Font>> *)(param_1 + 0x18),
                         (long *)(*plVar12 * 8 + *(long *)(param_1 + 0x18)),(long *)&local_48);
            }
            else {
                    /* try { // try from 00243bef to 00243c16 has its CatchHandler @ 00243d70 */
              detail::RangedValues<juce::Font>::applyOperation
                        ((RangedValues<juce::Font> *)param_1,plVar12);
            }
            if (local_48 != (long *)0x0) {
              LOCK();
              plVar2 = local_48 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)(*local_48 + 8))();
              }
            }
            plVar12 = plVar12 + 6;
            lVar11 = lVar11 + -0x30;
          } while (lVar11 != 0);
        }
        plVar12 = local_58;
        if (plVar13 != (long *)0x0) {
          LOCK();
          plVar2 = plVar13 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*plVar13 + 8))(plVar13);
          }
        }
                    /* try { // try from 00243c50 to 00243c70 has its CatchHandler @ 00243d68 */
        detail::RangedValues<juce::Font>::mergeEqualItems
                  ((RangedValues<juce::Font> *)param_1,uVar5,(long *)&local_78);
        this = local_40;
        detail::RangedValues<juce::Font>::mergeEqualItems
                  ((RangedValues<juce::Font> *)param_1,(long)plVar12,(long *)&local_78);
        uVar4 = *local_38;
        lVar7 = (long)plStack_70 - (long)local_78;
        lVar11 = lVar7 >> 0x3f;
                    /* try { // try from 00243c92 to 00243ca2 has its CatchHandler @ 00243d6a */
        detail::Ranges::insert((Ranges *)this,uVar5,(long)plVar12,&local_78);
        if ((long)plStack_70 - (long)local_78 != 0) {
          uVar14 = (lVar7 / 6 + lVar11 >> 3) - lVar11;
          uVar8 = ((long)plStack_70 - (long)local_78) / 0x30;
          if (uVar14 < uVar8) {
            plVar13 = local_78 + uVar14 * 6;
            uVar10 = uVar8;
            if (uVar14 < uVar8) {
              uVar10 = uVar14;
            }
            lVar11 = uVar8 * 0x30 + uVar10 * -0x30;
            do {
                    /* try { // try from 00243d10 to 00243d1d has its CatchHandler @ 00243d6e */
              detail::RangedValues<juce::Colour>::applyOperation(this,plVar13,uVar4);
              plVar13 = plVar13 + 6;
              lVar11 = lVar11 + -0x30;
            } while (lVar11 != 0);
          }
        }
                    /* try { // try from 00243d28 to 00243d45 has its CatchHandler @ 00243d6a */
        detail::RangedValues<juce::Colour>::mergeEqualItems(this,uVar5,(long *)&local_78);
        detail::RangedValues<juce::Colour>::mergeEqualItems(this,(long)local_58,(long *)&local_78);
        if (local_78 != (long *)0x0) {
          operator_delete(local_78);
        }
        return;
      }
    }
    iVar6 = iVar6 + 1;
  } while( true );
}


