		Animal( Animal const & src );
		~Animal();
		Animal &		operator=( Animal const & rhs );

		std::string		getType() const;
		virtual void	makeSound() const;
};

#endif
