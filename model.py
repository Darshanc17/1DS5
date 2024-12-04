from django.db import models

class Client(models.Model):
    name = models.CharField(max_length=100)
    email = models.EmailField(unique=True)
    phone = models.CharField(max_length=15, blank=True)
    created_at = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return self.name


class Investment(models.Model):
    client = models.ForeignKey(Client, on_delete=models.CASCADE, related_name='investments')
    investment_type = models.CharField(max_length=50, choices=[
        ('stocks', 'Stocks'),
        ('bonds', 'Bonds'),
        ('real_estate', 'Real Estate'),
        ('crypto', 'Cryptocurrency'),
    ])
    amount = models.DecimalField(max_digits=12, decimal_places=2)
    created_at = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return f"{self.investment_type} - {self.amount}"


class Transaction(models.Model):
    investment = models.ForeignKey(Investment, on_delete=models.CASCADE, related_name='transactions')
    date = models.DateField()
    transaction_type = models.CharField(max_length=50, choices=[
        ('buy', 'Buy'),
        ('sell', 'Sell'),
        ('dividend', 'Dividend'),
    ])
    amount = models.DecimalField(max_digits=12, decimal_places=2)

    def __str__(self):
        return f"{self.transaction_type} - {self.amount}"