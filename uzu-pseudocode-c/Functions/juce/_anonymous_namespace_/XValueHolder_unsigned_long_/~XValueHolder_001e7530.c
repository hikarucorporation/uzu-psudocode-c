// Function : ~XValueHolder
// Namespace: juce:_anonymous_namespace_:XValueHolder_unsigned_long_
// Entry    : 001e7530
// Prototype: undefined ~XValueHolder(XValueHolder<unsigned_long> * this)
// Body     : 001e7530 - 001e756d


/* juce::(anonymous namespace)::XValueHolder<unsigned long>::~XValueHolder() */

void __thiscall
juce::(anonymous_namespace)::XValueHolder<unsigned_long>::~XValueHolder
          (XValueHolder<unsigned_long> *this)

{
  XValueHolder<unsigned_long> *pXVar1;
  
  pXVar1 = this + 8;
  if (*(long *)(this + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001e7569 to 001e756d has its CatchHandler @ 001e7576 */
    std::__throw_bad_function_call();
  }
                    /* try { // try from 001e7542 to 001e754a has its CatchHandler @ 001e7576 */
  (**(code **)(this + 0x20))(pXVar1,this);
  if (*(code **)(this + 0x18) != (code *)0x0) {
                    /* try { // try from 001e7554 to 001e7560 has its CatchHandler @ 001e756e */
    (**(code **)(this + 0x18))(pXVar1,pXVar1,3);
  }
  return;
}


