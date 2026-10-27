// Function : getTextInRange
// Namespace: juce:TextEditor:ParagraphsModel
// Entry    : 00245e40
// Prototype: undefined getTextInRange(String * param_1, long param_2, long param_3, long param_4)
// Body     : 00245e40 - 00245f9e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TextEditor::ParagraphsModel::getTextInRange(juce::Range<long long>) const */

void __cdecl
juce::TextEditor::ParagraphsModel::getTextInRange
          (String *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long local_50;
  long *local_48;
  long *local_40;
  
  *(undefined1 **)param_1 = &DAT_0061ac58;
                    /* try { // try from 00245e6d to 00245e76 has its CatchHandler @ 00245f9f */
  detail::Ranges::getIntersectionsWith
            (&local_48,*(long **)(param_2 + 8),*(long **)(param_2 + 0x10),param_3,param_4);
  if (local_48 != local_40) {
    plVar10 = local_48;
    do {
      lVar2 = *plVar10;
      plVar3 = *(long **)(param_2 + 8);
      uVar6 = (long)*(long **)(param_2 + 0x10) - (long)plVar3;
      plVar7 = plVar3;
      if (0 < (long)uVar6) {
        uVar8 = uVar6 >> 4;
        do {
          uVar4 = uVar8 >> 1;
          uVar5 = uVar4;
          if (plVar7[uVar4 * 2 + 1] <= lVar2) {
            uVar5 = ~uVar4 + uVar8;
            plVar7 = plVar7 + uVar4 * 2 + 2;
          }
          uVar8 = uVar5;
        } while (0 < (long)uVar5);
      }
      if ((plVar7 != *(long **)(param_2 + 0x10)) && (*plVar7 <= lVar2)) {
        uVar6 = (long)plVar7 - (long)plVar3;
      }
                    /* try { // try from 00245f36 to 00245f3d has its CatchHandler @ 00245fd0 */
      juce::String::substring
                ((undefined8 *)&local_50,
                 *(undefined8 **)(*(long *)(param_2 + 0x20) + ((long)uVar6 >> 1)),
                 (int)lVar2 - *(int *)((long)plVar3 + uVar6),
                 (int)plVar10[1] - *(int *)((long)plVar3 + uVar6));
                    /* try { // try from 00245f3e to 00245f49 has its CatchHandler @ 00245fa4 */
      juce::String::operator+=(param_1,(String *)&local_50);
      piVar9 = (int *)(local_50 + -0x10);
      if (piVar9 != &emptyString) {
        LOCK();
        iVar1 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar9);
        }
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != local_40);
  }
  if (local_48 != (long *)0x0) {
    operator_delete(local_48);
  }
  return;
}


