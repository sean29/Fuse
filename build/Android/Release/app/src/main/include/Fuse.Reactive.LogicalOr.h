// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.2.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct LogicalOr;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class LogicalOr :1321
// {
::g::Fuse::Reactive::InfixOperator_type* LogicalOr_typeof();
void LogicalOr__Compute_fn(LogicalOr* __this, uObject* left, uObject* right, uObject** __retval);
void LogicalOr__get_Symbol_fn(LogicalOr* __this, uString** __retval);

struct LogicalOr : ::g::Fuse::Reactive::InfixOperator
{
};
// }

}}} // ::g::Fuse::Reactive
