// Function : drawTabButton
// Namespace: juce:LookAndFeel_V2
// Entry    : 00215660
// Prototype: undefined drawTabButton(LookAndFeel_V2 * this, TabBarButton * param_1, Graphics * param_2, undefined1 param_3, undefined1 param_4)
// Body     : 00215660 - 00215785


/* juce::LookAndFeel_V2::drawTabButton(juce::TabBarButton&, juce::Graphics&, bool, bool) */

void __thiscall
juce::LookAndFeel_V2::drawTabButton
          (LookAndFeel_V2 *this,TabBarButton *param_1,Graphics *param_2,undefined1 param_3,
          undefined1 param_4)

{
  undefined1 auVar1 [16];
  float local_70 [6];
  void *local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = 1;
                    /* try { // try from 00215691 to 0021569b has its CatchHandler @ 00215788 */
  (**(code **)(*(long *)this + 0x3d0))(this,param_1,&local_58);
                    /* try { // try from 0021569c to 002156a3 has its CatchHandler @ 0021578a */
  auVar1 = TabBarButton::getActiveArea(param_1);
  local_70[2] = (float)auVar1._0_4_;
  local_70[5] = (float)auVar1._4_4_;
  local_70[0] = 1.0;
  local_70[1] = 0.0;
  local_70[3] = 0.0;
  local_70[4] = 1.0;
  Path::applyTransform((Path *)&local_58,local_70);
  local_70[1] = 2.8026e-45;
  local_70[0] = (float)(_ZN4juce7ColoursL5blackE_14 & 0xffffff | 0x80000000);
  local_70[2] = 0.0;
  local_70[3] = 1.4013e-45;
                    /* try { // try from 00215717 to 00215726 has its CatchHandler @ 00215786 */
  DropShadow::drawForPath((DropShadow *)local_70,param_2,(undefined8 *)&local_58);
                    /* try { // try from 0021572b to 00215764 has its CatchHandler @ 0021578a */
  (**(code **)(*(long *)this + 0x3d8))(this,param_1,param_2,&local_58,param_3,param_4);
  (**(code **)(*(long *)this + 0x3b8))(this,param_1,param_2,param_3,param_4);
  uStack_50 = uStack_50 & 0xffffffff;
  free(local_58);
  return;
}


