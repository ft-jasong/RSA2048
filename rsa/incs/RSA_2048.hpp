#ifndef RSA_2048_HPP
# define RSA_2048_HPP

# include <utility>
# include <string>
# include <openssl/bn.h>

typedef BIGNUM BN;
typedef std::pair<BN *, BN *> Key;

class RSA2048
{
private:
	BN						*N;
	std::pair<BN *, BN *>	PK;
	std::pair<BN *, BN *>	SK;
	std::pair<BN *, BN *>	PK;
	BN						*phi;

public:
	RSA2048();
	~RSA2048();
	RSA2048(const RSA2048 &other);
	RSA2048& operator=(const RSA2048 &other);

	Key	getPK();
	Key	getSK();
};

#endif