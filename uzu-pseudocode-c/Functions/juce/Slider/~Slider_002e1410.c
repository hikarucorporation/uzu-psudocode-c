// Function : ~Slider
// Namespace: juce:Slider
// Entry    : 002e1410
// Prototype: undefined ~Slider(Slider * this)
// Body     : 002e1410 - 002e1522


/* juce::Slider::~Slider() */

void __thiscall juce::Slider::~Slider(Slider *this)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &PTR__Slider_0070c458;
  *(undefined ***)(this + 0xf0) = &PTR__Slider_0070c640;
  if (*(long **)(this + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a0) + 8))();
  }
  *(undefined8 *)(this + 0x1a0) = 0;
  if (*(code **)(this + 400) != (code *)0x0) {
                    /* try { // try from 002e145c to 002e1465 has its CatchHandler @ 002e1543 */
    (**(code **)(this + 400))(this + 0x180,this + 0x180,3);
  }
  if (*(code **)(this + 0x170) != (code *)0x0) {
                    /* try { // try from 002e1479 to 002e1482 has its CatchHandler @ 002e153b */
    (**(code **)(this + 0x170))(this + 0x160,this + 0x160,3);
  }
  if (*(code **)(this + 0x150) != (code *)0x0) {
                    /* try { // try from 002e1496 to 002e149f has its CatchHandler @ 002e1533 */
    (**(code **)(this + 0x150))(this + 0x140,this + 0x140,3);
  }
  if (*(code **)(this + 0x130) != (code *)0x0) {
                    /* try { // try from 002e14b3 to 002e14bc has its CatchHandler @ 002e152b */
    (**(code **)(this + 0x130))(this + 0x120,this + 0x120,3);
  }
  if (*(code **)(this + 0x110) != (code *)0x0) {
                    /* try { // try from 002e14d0 to 002e14d9 has its CatchHandler @ 002e1523 */
    (**(code **)(this + 0x110))(this + 0x100,this + 0x100,3);
  }
  *(undefined ***)(this + 0xf0) = &PTR__SettableTooltipClient_0070ded0;
  piVar2 = (int *)(*(long *)(this + 0xf8) + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
      Component::~Component((Component *)this);
      return;
    }
  }
  Component::~Component((Component *)this);
  return;
}


