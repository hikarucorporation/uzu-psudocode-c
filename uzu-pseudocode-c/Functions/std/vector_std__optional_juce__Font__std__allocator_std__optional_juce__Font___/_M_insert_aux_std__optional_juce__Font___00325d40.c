// Function : _M_insert_aux<std::optional<juce::Font>>
// Namespace: std:vector_std__optional_juce__Font__std__allocator_std__optional_juce__Font___
// Entry    : 00325d40
// Prototype: void _M_insert_aux<std::optional<juce::Font>>(vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>> * this, undefined8 * param_1, undefined8 * param_2)
// Body     : 00325d40 - 00325e7f


/* void std::vector<std::optional<juce::Font>, std::allocator<std::optional<juce::Font> >
   >::_M_insert_aux<std::optional<juce::Font>
   >(__gnu_cxx::__normal_iterator<std::optional<juce::Font>*, std::vector<std::optional<juce::Font>,
   std::allocator<std::optional<juce::Font> > > >, std::optional<juce::Font>&&) */

void __thiscall
std::vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>>::
_M_insert_aux<std::optional<juce::Font>>
          (vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>> *this,
          undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  
  puVar4 = *(undefined8 **)(this + 8);
  *(undefined1 *)(puVar4 + 1) = 0;
  if (*(char *)(puVar4 + -1) != '\0') {
    *puVar4 = puVar4[-2];
    puVar4[-2] = 0;
    *(undefined1 *)(puVar4 + 1) = 1;
    puVar4 = *(undefined8 **)(this + 8);
  }
  *(undefined8 **)(this + 8) = puVar4 + 2;
  uVar6 = (long)puVar4 + (-0x10 - (long)param_1);
  if (0 < (long)uVar6) {
    lVar7 = (uVar6 >> 4) + 1;
    pcVar5 = (char *)(puVar4 + -1);
    do {
      if ((*pcVar5 == '\0') || (pcVar5[-0x10] == '\0')) {
        if (pcVar5[-0x10] == '\0') {
          if (*pcVar5 != '\0') {
            *pcVar5 = '\0';
            plVar3 = *(long **)(pcVar5 + -8);
            goto joined_r0x00325e0a;
          }
        }
        else {
          *(undefined8 *)(pcVar5 + -8) = *(undefined8 *)(pcVar5 + -0x18);
          pcVar5[-0x18] = '\0';
          pcVar5[-0x17] = '\0';
          pcVar5[-0x16] = '\0';
          pcVar5[-0x15] = '\0';
          pcVar5[-0x14] = '\0';
          pcVar5[-0x13] = '\0';
          pcVar5[-0x12] = '\0';
          pcVar5[-0x11] = '\0';
          *pcVar5 = '\x01';
        }
      }
      else {
        uVar2 = *(undefined8 *)(pcVar5 + -0x18);
        plVar3 = *(long **)(pcVar5 + -8);
        pcVar5[-0x18] = '\0';
        pcVar5[-0x17] = '\0';
        pcVar5[-0x16] = '\0';
        pcVar5[-0x15] = '\0';
        pcVar5[-0x14] = '\0';
        pcVar5[-0x13] = '\0';
        pcVar5[-0x12] = '\0';
        pcVar5[-0x11] = '\0';
        *(undefined8 *)(pcVar5 + -8) = uVar2;
joined_r0x00325e0a:
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar3 + 8))();
          }
        }
      }
      lVar7 = lVar7 + -1;
      pcVar5 = pcVar5 + -0x10;
    } while (1 < lVar7);
  }
  if ((*(char *)(param_1 + 1) == '\0') || (*(char *)(param_2 + 1) == '\0')) {
    if (*(char *)(param_2 + 1) != '\0') {
      *param_1 = *param_2;
      *param_2 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    if (*(char *)(param_1 + 1) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 1) = 0;
    plVar3 = (long *)*param_1;
  }
  else {
    uVar2 = *param_2;
    *param_2 = 0;
    plVar3 = (long *)*param_1;
    *param_1 = uVar2;
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00325e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))();
      return;
    }
  }
  return;
}


