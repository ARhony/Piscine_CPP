		Animal( Animal const & src );
		virtual ~Animal();
		Animal &		operator=( Animal const & rhs );

		std::string		getType() const;
		virtual void	makeSound() const = 0;
};

#endif
