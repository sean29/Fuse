// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.2.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct GreaterThan;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class GreaterThan :1245
// {
::g::Fuse::Reactive::InfixOperator_type* GreaterThan_typeof();
void GreaterThan__Compute_fn(GreaterThan* __this, uObject* left, uObject* right, uObject** __retval);
void GreaterThan__get_Symbol_fn(GreaterThan* __this, uString** __retval);

struct GreaterThan : ::g::Fuse::Reactive::InfixOperator
{
};
// }

}}} // ::g::Fuse::Reactive
