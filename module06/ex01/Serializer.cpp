#include "Serializer.hpp"

Serializer::Serializer(void)
{
	return;
}

Serializer::Serializer(Serializer const & src)
{
	*this = src;
	return;
}

Serializer & Serializer::operator=(Serializer const & rhs)
{
	*this = rhs;
	return *this;
}

Serializer::~Serializer(void)
{
	return;
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	uintptr_t	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	Data	*ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}
