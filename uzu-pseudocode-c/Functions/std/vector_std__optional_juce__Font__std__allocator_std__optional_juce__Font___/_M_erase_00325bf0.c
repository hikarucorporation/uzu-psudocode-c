// Function : _M_erase
// Namespace: std:vector_std__optional_juce__Font__std__allocator_std__optional_juce__Font___
// Entry    : 00325bf0
// Prototype: long * _M_erase(vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>> * this, long * param_1, long * param_2)
// Body     : 00325bf0 - 00325d3f


/* std::vector<std::optional<juce::Font>, std::allocator<std::optional<juce::Font> >
   >::_M_erase(__gnu_cxx::__normal_iterator<std::optional<juce::Font>*,
   std::vector<std::optional<juce::Font>, std::allocator<std::optional<juce::Font> > > >,
   __gnu_cxx::__normal_iterator<std::optional<juce::Font>*, std::vector<std::optional<juce::Font>,
   std::allocator<std::optional<juce::Font> > > >) */

long * __thiscall
std::vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>>::_M_erase
          (vector<std::optional<juce::Font>,std::allocator<std::optional<juce::Font>>> *this,
          long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  if (param_1 != param_2) {
    plVar7 = *(long **)(this + 8);
    uVar8 = (long)plVar7 - (long)param_2;
    if (uVar8 == 0) {
      plVar10 = param_1;
      if (param_2 == param_1) {
        return param_1;
      }
    }
    else if ((long)uVar8 < 1) {
      plVar10 = (long *)(((long)plVar7 - (long)param_2) + (long)param_1);
      param_2 = plVar7;
      if (plVar7 == plVar10) {
        return param_1;
      }
    }
    else {
      lVar9 = (uVar8 >> 4) + 1;
      lVar6 = 0;
      do {
        cVar2 = *(char *)((long)param_1 + lVar6 + 8);
        cVar3 = *(char *)((long)param_2 + lVar6 + 8);
        if ((cVar2 == '\0') || (cVar3 == '\0')) {
          if (cVar3 == '\0') {
            if (cVar2 != '\0') {
              *(undefined1 *)((long)param_1 + lVar6 + 8) = 0;
              plVar7 = *(long **)((long)param_1 + lVar6);
              goto joined_r0x00325cb5;
            }
          }
          else {
            *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
            *(undefined8 *)((long)param_2 + lVar6) = 0;
            *(undefined1 *)((long)param_1 + lVar6 + 8) = 1;
          }
        }
        else {
          uVar4 = *(undefined8 *)((long)param_2 + lVar6);
          *(undefined8 *)((long)param_2 + lVar6) = 0;
          plVar7 = *(long **)((long)param_1 + lVar6);
          *(undefined8 *)((long)param_1 + lVar6) = uVar4;
joined_r0x00325cb5:
          if (plVar7 != (long *)0x0) {
            LOCK();
            plVar10 = plVar7 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)(*plVar7 + 8))();
            }
          }
        }
        lVar9 = lVar9 + -1;
        lVar6 = lVar6 + 0x10;
      } while (1 < lVar9);
      plVar7 = *(long **)(this + 8);
      plVar10 = (long *)(((long)plVar7 - (long)param_2) + (long)param_1);
      param_2 = plVar7;
      if (plVar7 == plVar10) {
        return param_1;
      }
    }
    plVar7 = plVar10;
    do {
      if ((char)plVar7[1] != '\0') {
        *(undefined1 *)(plVar7 + 1) = 0;
        plVar5 = (long *)*plVar7;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != param_2);
    *(long **)(this + 8) = plVar10;
  }
  return param_1;
}


