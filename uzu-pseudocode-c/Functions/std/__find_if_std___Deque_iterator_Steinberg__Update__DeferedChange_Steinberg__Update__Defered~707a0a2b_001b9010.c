// Function : __find_if<std::_Deque_iterator<Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*>,__gnu_cxx::__ops::_Iter_equals_val<Steinberg::Update::DeferedChange_const>>
// Namespace: std
// Entry    : 001b9010
// Prototype: _Deque_iterator __find_if<std::_Deque_iterator<Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*>,__gnu_cxx::__ops::_Iter_equals_val<Steinberg::Update::DeferedChange_const>>(long * param_1, long * param_2, long * param_3, long * param_4)
// Body     : 001b9010 - 001b929f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Deque_iterator<Steinberg::Update::DeferedChange, Steinberg::Update::DeferedChange&,
   Steinberg::Update::DeferedChange*>
   std::__find_if<std::_Deque_iterator<Steinberg::Update::DeferedChange,
   Steinberg::Update::DeferedChange&, Steinberg::Update::DeferedChange*>,
   __gnu_cxx::__ops::_Iter_equals_val<Steinberg::Update::DeferedChange const>
   >(std::_Deque_iterator<Steinberg::Update::DeferedChange, Steinberg::Update::DeferedChange&,
   Steinberg::Update::DeferedChange*>, std::_Deque_iterator<Steinberg::Update::DeferedChange,
   Steinberg::Update::DeferedChange&, Steinberg::Update::DeferedChange*>,
   __gnu_cxx::__ops::_Iter_equals_val<Steinberg::Update::DeferedChange const>,
   std::random_access_iterator_tag) */

void __cdecl
std::
__find_if<std::_Deque_iterator<Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*>,__gnu_cxx::__ops::_Iter_equals_val<Steinberg::Update::DeferedChange_const>>
          (long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_3[3];
  lVar4 = param_2[3];
  lVar7 = lVar1 - lVar4 >> 3;
  lVar8 = *param_3 - param_3[1] >> 4;
  plVar3 = (long *)*param_2;
  plVar5 = (long *)param_2[2];
  lVar2 = (long)plVar5 - (long)plVar3 >> 4;
  uVar6 = (lVar7 + -1 + (ulong)(lVar1 == 0)) * 0x20 + lVar8 + lVar2;
  if (3 < (long)uVar6) {
    lVar1 = *param_4;
    lVar2 = (uVar6 >> 2) + 1;
    do {
      if (*plVar3 == lVar1) goto LAB_001b9287;
      plVar3 = plVar3 + 2;
      *param_2 = (long)plVar3;
      lVar7 = lVar4;
      if (plVar3 == plVar5) {
        lVar7 = lVar4 + 8;
        param_2[3] = lVar7;
        plVar3 = *(long **)(lVar4 + 8);
        param_2[1] = (long)plVar3;
        plVar5 = plVar3 + 0x40;
        param_2[2] = (long)plVar5;
        *param_2 = (long)plVar3;
      }
      lVar4 = lVar7;
      if (*plVar3 == lVar1) goto LAB_001b9287;
      plVar3 = plVar3 + 2;
      *param_2 = (long)plVar3;
      if (plVar3 == plVar5) {
        lVar4 = lVar7 + 8;
        param_2[3] = lVar4;
        plVar3 = *(long **)(lVar7 + 8);
        param_2[1] = (long)plVar3;
        plVar5 = plVar3 + 0x40;
        param_2[2] = (long)plVar5;
        *param_2 = (long)plVar3;
      }
      if (*plVar3 == lVar1) goto LAB_001b9287;
      plVar3 = plVar3 + 2;
      *param_2 = (long)plVar3;
      lVar7 = lVar4;
      if (plVar3 == plVar5) {
        lVar7 = lVar4 + 8;
        param_2[3] = lVar7;
        plVar3 = *(long **)(lVar4 + 8);
        param_2[1] = (long)plVar3;
        plVar5 = plVar3 + 0x40;
        param_2[2] = (long)plVar5;
        *param_2 = (long)plVar3;
      }
      lVar4 = lVar7;
      if (*plVar3 == lVar1) goto LAB_001b9287;
      plVar3 = plVar3 + 2;
      *param_2 = (long)plVar3;
      if (plVar3 == plVar5) {
        lVar4 = lVar7 + 8;
        param_2[3] = lVar4;
        plVar3 = *(long **)(lVar7 + 8);
        param_2[1] = (long)plVar3;
        plVar5 = plVar3 + 0x40;
        param_2[2] = (long)plVar5;
        *param_2 = (long)plVar3;
      }
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    lVar1 = param_3[3];
    lVar7 = lVar1 - lVar4 >> 3;
    lVar8 = *param_3 - param_3[1] >> 4;
    lVar2 = (long)plVar5 - (long)plVar3 >> 4;
  }
  lVar2 = (lVar7 + -1 + (ulong)(lVar1 == 0)) * 0x20 + lVar8 + lVar2;
  if (lVar2 == 3) {
    lVar1 = *param_4;
    if (*plVar3 == lVar1) goto LAB_001b9287;
    plVar3 = plVar3 + 2;
    *param_2 = (long)plVar3;
    if (plVar3 == plVar5) {
      param_2[3] = lVar4 + 8;
      plVar3 = *(long **)(lVar4 + 8);
      param_2[1] = (long)plVar3;
      plVar5 = plVar3 + 0x40;
      param_2[2] = (long)plVar5;
      *param_2 = (long)plVar3;
      lVar4 = lVar4 + 8;
    }
LAB_001b9205:
    if (*plVar3 == lVar1) {
LAB_001b9287:
      *param_1 = (long)plVar3;
      param_1[1] = param_2[1];
      param_1[2] = (long)plVar5;
      param_1[3] = lVar4;
      return;
    }
    plVar3 = plVar3 + 2;
    *param_2 = (long)plVar3;
    if (plVar3 == plVar5) {
      param_2[3] = lVar4 + 8;
      plVar3 = *(long **)(lVar4 + 8);
      param_2[1] = (long)plVar3;
      plVar5 = plVar3 + 0x40;
      param_2[2] = (long)plVar5;
      *param_2 = (long)plVar3;
      lVar2 = *plVar3;
      lVar4 = lVar4 + 8;
    }
    else {
      lVar2 = *plVar3;
    }
    if (lVar2 == lVar1) goto LAB_001b9287;
  }
  else {
    if (lVar2 == 2) {
      lVar1 = *param_4;
      goto LAB_001b9205;
    }
    if (lVar2 != 1) goto LAB_001b9245;
    if (*plVar3 == *param_4) goto LAB_001b9287;
  }
  *param_2 = (long)(plVar3 + 2);
  if (plVar3 + 2 == plVar5) {
    param_2[3] = lVar4 + 8;
    lVar4 = *(long *)(lVar4 + 8);
    param_2[1] = lVar4;
    param_2[2] = lVar4 + 0x200;
    *param_2 = lVar4;
  }
LAB_001b9245:
  lVar4 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = lVar4;
  param_1[2] = param_3[2];
  param_1[3] = param_3[3];
  return;
}


