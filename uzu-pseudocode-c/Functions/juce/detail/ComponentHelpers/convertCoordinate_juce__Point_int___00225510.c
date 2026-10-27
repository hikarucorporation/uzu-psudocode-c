// Function : convertCoordinate<juce::Point<int>>
// Namespace: juce:detail:ComponentHelpers
// Entry    : 00225510
// Prototype: Point convertCoordinate<juce::Point<int>>(long * param_1, long * param_2, ulong param_3)
// Body     : 00225510 - 00225635


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Point<int> juce::detail::ComponentHelpers::convertCoordinate<juce::Point<int>
   >(juce::Component const*, juce::Component const*, juce::Point<int>) */

void __cdecl
juce::detail::ComponentHelpers::convertCoordinate<juce::Point<int>>
          (long *param_1,long *param_2,ulong param_3)

{
  float *pfVar1;
  long *plVar2;
  float fVar3;
  ulong local_38;
  long *local_30;
  undefined1 *local_28;
  
  if (param_2 == (long *)0x0) {
LAB_002255ea:
    if (param_1 != (long *)0x0) {
      plVar2 = param_1;
      do {
        param_2 = plVar2;
        plVar2 = (long *)param_2[6];
      } while ((long *)param_2[6] != (long *)0x0);
      param_3 = convertFromParentSpace<juce::Point<int>>(param_2,param_3);
      if (param_2 != param_1) {
LAB_0022561c:
        convertFromDistantParentSpace<juce::Point<int>>((long)param_2,param_1,param_3);
      }
    }
  }
  else {
    while (param_2 != param_1) {
      plVar2 = param_1;
      while (plVar2 != (long *)0x0) {
        plVar2 = (long *)plVar2[6];
        if (plVar2 == param_2) goto LAB_0022561c;
      }
      local_38 = param_3;
      local_30 = param_2;
      local_28 = (undefined1 *)&local_38;
      param_3 = convertToParentSpace<juce::Point<int>>(juce::Component_const&,juce::Point<int>)::
                {lambda()#1}::operator()((_lambda___1_ *)&local_30);
      pfVar1 = (float *)param_2[10];
      if (pfVar1 != (float *)0x0) {
        fVar3 = (float)(int)(param_3 >> 0x20);
        param_3 = CONCAT44((int)((float)(int)param_3 * pfVar1[3] + fVar3 * pfVar1[4] + pfVar1[5]),
                           (int)(*pfVar1 * (float)(int)param_3 + pfVar1[1] * fVar3 + pfVar1[2]));
      }
      param_2 = (long *)param_2[6];
      if (param_2 == (long *)0x0) goto LAB_002255ea;
    }
  }
  return;
}


